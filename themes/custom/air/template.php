<?php
/**
 * @file
 * File with theme templates and preprocess functions of air theme.
 */

/**
 * Override or insert variables into the html template.
 */
function air_preprocess_html(&$vars) {
  global $language;

  $page_title = drupal_get_title();

  // Check if current page is frontpage.
  if ($vars['is_front'] || empty($page_title)) {
    $vars['head_title'] = variable_get('site_name');
  }
  else {
    // Serve proper content title if is_front is false.
    $head_elements = array(
      $page_title,
      variable_get('site_name', ''),
    );
    $vars['head_title'] = implode(' | ', $head_elements);
  }

  // Clean up the lang attributes.
  $html_attributes = array(
    'version' => 'HTML+RDFa 1.1',
    'lang' => $language->language,
    'dir' => $language->dir,
  );
  $vars['html_attributes'] = drupal_attributes($html_attributes);

  $theme_path = path_to_theme();
  // Add conditional CSS for IE8 and below.
  drupal_add_css(
    $theme_path . '/styles/css/ie/ie.css',
    array(
      'group' => CSS_THEME,
      'browsers' => array('IE' => 'lt IE 9', '!IE' => FALSE),
      'preprocess' => FALSE,
    )
  );
  // Add conditional CSS for IE6.
  drupal_add_css(
    $theme_path . '/styles/css/ie/ie7.css',
    array(
      'group' => CSS_THEME,
      'browsers' => array('IE' => 'IE 7', '!IE' => FALSE),
      'preprocess' => FALSE,
    )
  );
}

/**
 * Override or insert variables into the page template.
 */
function air_preprocess_page(&$vars) {
  if (!drupal_is_front_page()) {
    $item = menu_get_active_trail();
    if (!empty($item[1]['link_title'])) {
      $vars['section_head'] = $item[1]['link_title'];
    }
  }
}

/**
 * Override of theme_pager().
 */
function air_pager($vars) {
  $tags = $vars['tags'];
  $element = $vars['element'];
  $parameters = $vars['parameters'];
  $quantity = $vars['quantity'];
  $pager_list = theme('pager_list', $vars);

  $links = array();
  $links['pager-previous'] = theme('pager_previous', array(
    'text' => (isset($tags[1]) ? $tags[1] : t('Prev')),
    'element' => $element,
    'interval' => 1,
    'parameters' => $parameters,
  ));
  $links['pager-next'] = theme('pager_next', array(
    'text' => (isset($tags[3]) ? $tags[3] : t('Next')),
    'element' => $element,
    'interval' => 1,
    'parameters' => $parameters,
  ));
  $links = array_filter($links);
  $pager_links = theme('links', array(
    'links' => $links,
    'attributes' => array('class' => 'links pager pager-links'),
  ));
  if ($pager_list) {
    return "<div class='pager clearfix'>$pager_list $pager_links</div>";
  }
}

/**
 * Implements template_preprocess_user_profile().
 */
function air_preprocess_user_profile(&$vars) {
  $theme_path = path_to_theme();
  $link_options = array(
    'html' => TRUE,
    'attributes' => array(),
  );
  if (!empty($vars['field_photo'])) {
    $photo_path = image_style_url('avatar', $vars['field_photo'][0]['uri']);
    if (!empty($vars['field_caricature'][0]['uri'])) {
      $img_uri = $vars['field_caricature'][0]['uri'];
    }
    else {
      $img_uri = $vars['field_photo'][0]['uri'];
    }
    $link_options['attributes']['img_src'] = image_style_url('avatar', $img_uri);
    $link_options['attributes']['photo_src'] = $photo_path;
    drupal_add_js($theme_path . '/scripts/user.js');
  }
  else {
    $photo_path = $theme_path . '/images/silhouette-female.png';
  }
  $img = theme('image', array('path' => $photo_path));
  $username = $vars['elements']['#account']->name;
  $vars['user_image'] = l($img, 'employee/' . $username, $link_options);
}

/**
 * Implements template_preprocess_views_view_fields().
 */
function air_preprocess_views_view_fields(&$vars) {
  if ($vars['view']->name == 'employees_list') {
    $fields = $vars['row'];

    // Add field picture.
    $theme_path = path_to_theme();
    $link_options = array(
      'html' => TRUE,
      'attributes' => array(),
    );

    if (!empty($fields->field_field_photo)) {
      $photo_path = image_style_url('miniavatar', $fields->field_field_photo[0]['rendered']['#item']['uri']);
      if (!empty($fields->field_field_caricature[0]['rendered']['#item']['uri'])) {
        $img_uri = $fields->field_field_caricature[0]['rendered']['#item']['uri'];
      }
      else {
        $img_uri = $fields->field_field_photo[0]['rendered']['#item']['uri'];
      }
      $link_options['attributes']['img_src'] = image_style_url('miniavatar', $img_uri);
      $link_options['attributes']['photo_src'] = $photo_path;
      drupal_add_js($theme_path . '/scripts/user.js');
    }
    else {
      $photo_path = $theme_path . '/images/silhouette-female.png';
    }
    $img = theme('image', array('path' => $photo_path));
    $username = $vars['fields']['name']->raw;
    $vars['picture'] = l($img, 'employee/' . $username, $link_options);
  }
}
