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
