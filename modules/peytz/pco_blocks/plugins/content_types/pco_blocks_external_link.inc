<?php
/**
 * @file
 * Displays a header bar.
 */

$plugin = array(
  'single' => TRUE,
  'top level' => TRUE,
  'title' => t('PCo Blocks External Link'),
  'description' => t('PCo Blocks External Link.'),
  'category' => t('Peytz & Co.'),
  'key' => 'pco_blocks_external_link',
  'icon' => 'icon_node_form.png',
  'defaults' => array(
    'link_title' => '',
    'link_url' => '',
    'link_text' => '',
    'link_image_fid' => '',
    'link_image_path' => '',
    'link_image_style' => '',
  ),
  'edit form' => 'pco_blocks_external_link_content_type_edit_form',
  'render callback' => 'pco_blocks_external_link_content_type_render',
  'all contexts' => TRUE,
);

/**
 * Returns an edit form for setting up the external link pane.
 */
function pco_blocks_external_link_content_type_edit_form($form, &$form_state) {
  $form['override_title']['#access'] = FALSE;
  $form['override_title_text']['#access'] = FALSE;
  $form['override_title_markup']['#access'] = FALSE;

  form_load_include($form_state, 'inc', 'pco_blocks', 'plugins/content_types/pco_blocks_external_link');
  $conf = $form_state['conf'];

  $form['link_title'] = array(
    '#type' => 'textfield',
    '#default_value' => isset($conf['link_title']) ? $conf['link_title'] : '',
    '#title' => t('Link title'),
  );
  $form['link_url'] = array(
    '#type' => 'textfield',
    '#default_value' => isset($conf['link_url']) ? $conf['link_url'] : '',
    '#title' => t('Link URL'),
    '#description' => t('Should be in form of http://example.com'),
    '#required' => TRUE,
  );
  $form['link_text'] = array(
    '#type' => 'textfield',
    '#default_value' => isset($conf['link_text']) ? $conf['link_text'] : '',
    '#title' => t('Link text'),
  );
  $form['link_image_fid'] = array(
    '#title' => t('Image'),
    '#type' => 'managed_file',
    '#default_value' => isset($conf['link_image_fid']) ? $conf['link_image_fid'] : '',
    '#upload_location' => 'public://images/',
  );
  $form['bgcolor'] = array(
    '#type' => 'select',
    '#title' => t('Select background color of block'),
    '#options' => array(
      'strict' => t('No color'),
      'grey' => t('Light grey'),
      'dark' => t('Dark grey'),
      'orange' => t('Orange'),
    ),
    '#default_value' => $conf['bgcolor'],
    '#description' => t('Choose a background color for the block.'),
  );
  $form['titlesize'] = array(
    '#type' => 'select',
    '#title' => t('Select fontsize for headline'),
    '#options' => array(
      'h1' => t('H1'),
      'h2' => t('H2'),
    ),
    '#default_value' => $conf['titlesize'],
    '#description' => t('Choose a fontsize for the headline of the block.'),
  );
  $form['image'] = array(
    '#type' => 'radios',
    '#title' => t('Use image?'),
    '#default_value' => $conf['image'],
    '#options' => array(
      0 => t('No image'),
      1 => t('Without border'),
      2 => t('With border'),
    ),
  );

  return $form;
}

/**
 * Validation function for edit form for setting up the external link pane.
 */
function pco_blocks_external_link_content_type_edit_form_validate(&$form, &$form_state) {
  if (!valid_url($form_state['values']['link_url'], TRUE)) {
    form_set_error('link_url', t('Not a valid url'));
  }
}

/**
 * Submit function for form for setting up the external link pane.
 */
function pco_blocks_external_link_content_type_edit_form_submit(&$form, &$form_state) {
  foreach (array_keys($form_state['plugin']['defaults']) as $key) {
    if (isset($form_state['values'][$key])) {
      $form_state['conf'][$key] = $form_state['values'][$key];
    }
  }

  foreach (array('bgcolor', 'titlesize', 'image') as $key) {
    $form_state['conf'][$key] = $form_state['values'][$key];
  }

  if ($form_state['values']['link_image_fid'] != 0) {
    $file = file_load($form_state['values']['link_image_fid']);
    $file->status = FILE_STATUS_PERMANENT;
    file_save($file);
    file_usage_add($file, 'pco_blocks', 'image', 1);

    // Save the fid of the file so that the module can reference it later.
    $form_state['conf']['link_image_fid'] = $file->fid;
    $form_state['conf']['link_image_path'] = $file->uri;
  }
  elseif ($form_state['values']['link_image_fid'] == 0) {
    $fid = $form_state['conf']['link_image_fid'];
    $file = $fid ? file_load($fid) : FALSE;
    if ($file) {
      file_usage_delete($file, 'pco_blocks', 'image', 1);
      file_delete($file);
    }
    $form_state['conf']['link_image_fid'] = FALSE;
  }
}

/**
 * Output function for the external link block in panels.
 */
function pco_blocks_external_link_content_type_render($subtype, $conf, $args, $contexts) {
  $block          = new stdClass();
  $block->title   = '';

  $content['link_title'] = $conf['link_title'];
  $content['link_url'] = $conf['link_url'];
  $content['link_text'] = $conf['link_text'];
  $content['link_image_fid'] = $conf['link_image_fid'];
  $content['link_image_path'] = $conf['link_image_path'];
  $content['link_image_style'] = ($conf['link_image_style'] == '') ? 'original' : $conf['link_image_style'];
  $content['bgcolor'] = $conf['bgcolor'];
  $content['titlesize'] = $conf['titlesize'];
  $content['image'] = $conf['image'];
  $block->content = theme('pco_blocks_external_link', $content);

  return $block;
}
