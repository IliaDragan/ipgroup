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
    $is_menu_item = !empty($item[1]['title']) && !empty($item[1]['menu_name']);
    if ($is_menu_item && $item[1]['menu_name'] == 'main-menu') {
      $vars['section_head'] = $item[1]['title'];
    }
    elseif (!empty($vars['node']->type)) {
      if (!empty($vars['node']->field_category['und'][0]['taxonomy_term']->name)) {
        $vars['section_head'] = $vars['node']->field_category['und'][0]['taxonomy_term']->name;
      }
      else {
        $type = $vars['node']->type;
        $types = node_type_get_types();
        if (!empty($types[$type]->name)) {
          $type_name = $types[$type]->name;
          $vars['section_head'] = t('@type', array('@type' => $type_name));
        }
      }
    }
  }
}

/**
 * Implements template_preprocess_user_profile().
 */
function air_preprocess_user_profile(&$vars) {
  $theme_path = path_to_theme();
  $link_options = array(
    'html' => TRUE,
  );
  if (!empty($vars['field_photo'])) {
    $photo_path = image_style_url('avatar', $vars['field_photo'][0]['uri']);
  }
  else {
    $photo_path = $theme_path . '/images/silhouette.png';
  }
  $img = theme('image', array('path' => $photo_path));
  $username = $vars['elements']['#account']->name;
  $vars['user_image'] = l($img, 'employee/' . $username, $link_options);
  drupal_add_js($theme_path . '/scripts/user.js');
}

/**
 * Implements template_preprocess_views_view_fields().
 */
function air_preprocess_views_view_fields(&$vars) {
  $view = $vars['view'];
  if ($view->current_display == 'employees_list_pane') {
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
      $photo_path = $theme_path . '/images/silhouette.png';
    }
    $img = theme('image', array('path' => $photo_path));
    $username = $vars['fields']['name']->raw;
    $vars['picture'] = l($img, 'employee/' . $username, $link_options);
  }
}

/**
 * Implements template_preprocess_views_view().
 */
function air_preprocess_views_view(&$vars) {
  $view = $vars['view'];
  if ($view->current_display == 'owl_employee_carousel') {
    $theme_path = path_to_theme();
    drupal_add_js($theme_path . '/scripts/employe-carousel.js',
      array('scope' => 'footer', 'weight' => 100));
    drupal_add_css($theme_path . '/styles/css/carousel.css',
      array('scope' => 'footer', 'weight' => 100));
  }
}

/**
 * Implements hook_preprocess_field().
 */
function air_preprocess_field(&$variables) {
  // Preprocess field_user user reference field.
  if ($variables['element']['#field_name'] == 'field_user') {
    global $language;
    $lang = $language->language;
    $items = &$variables['items'];
    foreach ($items as &$item) {
      $entity = $item['#options']['entity'];
      $path = 'employee/' . $entity->name;
      if (!empty($entity->field_name[$lang][0]['value'])) {
        $item['name_link'] = l($entity->field_name[$lang][0]['value'], $path);
      }
      elseif (!empty($entity->field_name[LANGUAGE_NONE][0]['value'])) {
        $item['name_link'] = l($entity->field_name[LANGUAGE_NONE][0]['value'], $path);
      }
      if (!empty($entity->field_position[$lang][0]['value'])) {
        $item['position'] = $entity->field_position[$lang][0]['value'];
      }
      elseif (!empty($entity->field_position[LANGUAGE_NONE][0]['value'])) {
        $item['position'] = $entity->field_position[LANGUAGE_NONE][0]['value'];
      }
      $item['identifier'] = 'employee-' . $entity->uid;
      if (!empty($entity->field_photo[$lang][0]['uri'])) {
        $photo_path = image_style_url('miniavatar', $entity->field_photo[$lang][0]['uri']);
        $item['photo'] = theme('image', array('path' => $photo_path));
      }
      elseif (!empty($entity->field_photo[LANGUAGE_NONE][0]['uri'])) {
        $photo_path = image_style_url('miniavatar', $entity->field_photo[LANGUAGE_NONE][0]['uri']);
        $item['photo'] = theme('image', array('path' => $photo_path));
      }
      else {
        $photo_path = path_to_theme() . '/images/silhouette.png';
        $item['photo'] = theme('image', array('path' => $photo_path));
      }
      if (!empty($entity->field_phone[$lang][0]['value'])) {
        $item['phone'] = $entity->field_phone[$lang][0]['value'];
      }
      elseif (!empty($entity->field_phone[LANGUAGE_NONE][0]['value'])) {
        $item['phone'] = $entity->field_phone[LANGUAGE_NONE][0]['value'];
      }
    }
    $theme_path = path_to_theme();
    drupal_add_js($theme_path . '/scripts/field_user.js');
  }
}
