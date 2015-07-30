<?php
/**
 * @file
 * File with theme templates and preprocess functions of ipg theme.
 */

/**
 * Override or insert variables into the html template.
 */
function ipg_preprocess_html(&$vars) {
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
}

/**
 * Override or insert variables into the page template.
 */
function ipg_preprocess_page(&$vars) {
  if (!drupal_is_front_page()) {
    $item = menu_get_active_trail();
    $is_menu_item = !empty($item[1]['title']) && !empty($item[1]['menu_name']);
    if ($is_menu_item && $item[1]['menu_name'] == 'main-menu') {
      $vars['section_head'] = $item[1]['title'];
      if (!empty($vars['node']->title) && $item[1]['title'] == $vars['node']->title) {
        // Hide node title if orange bar displays this title.
        drupal_add_css('.pane-page-title {display: none;}', array('type' => 'inline'));
      }
    }
    elseif (!empty($vars['node']->type)) {
      if (!empty($vars['node']->field_category['und'][0]['taxonomy_term']->name)) {
        $vars['section_head'] = t($vars['node']->field_category['und'][0]['taxonomy_term']->name);
      }
      else {
        $type = $vars['node']->type;
        $types = node_type_get_types();
        if (!empty($types[$type]->name)) {
          $type_name = $types[$type]->name;
          $vars['section_head'] = t($type_name);
        }
      }
    }

    // If page not found.
    $header = drupal_get_http_header('status');
    if ($header == '404 Not Found') {
      $vars['theme_hook_suggestions'][] = 'page__404';
      $img_path = base_path() . drupal_get_path('theme', 'air') . '/images/404white.png';
      $vars['image_404'] = theme('image', array(
        'path' => $img_path,
        'alt' => t('Page not found.'),
      ));

    }
  }
}

/**
 * Implements template_preprocess_user_profile().
 */
function ipg_preprocess_user_profile(&$vars) {
  $theme_path = drupal_get_path('theme', 'ipg');
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
 * Implements template_preprocess_views_view().
 */
function ipg_preprocess_views_view(&$vars) {
  $view = $vars['view'];
  if ($view->current_display == 'owl_employee_carousel') {
    $theme_path = drupal_get_path('theme', 'ipg');
    drupal_add_js($theme_path . '/scripts/employe-carousel.js',
      array('scope' => 'footer', 'weight' => 100));
  }
}

/**
 * Implements hook_preprocess_field().
 */
function ipg_preprocess_field(&$variables) {
  // Preprocess field_user user reference field.
  if ($variables['element']['#field_name'] == 'field_user') {
    global $language;
    $lang = $language->language;
    $items = &$variables['items'];
    foreach ($items as &$item) {
      $entity = $item['#options']['entity'];
      if (!empty($entity->field_name[$lang][0]['value'])) {
        $item['name'] = $entity->field_name[$lang][0]['value'];
      }
      elseif (!empty($entity->field_name[LANGUAGE_NONE][0]['value'])) {
        $item['name'] = $entity->field_name[LANGUAGE_NONE][0]['value'];
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
        $photo_path = drupal_get_path('theme', 'ipg') . '/images/silhouette.png';
        $item['photo'] = theme('image', array('path' => $photo_path));
      }
      if (!empty($entity->field_phone[$lang][0]['value'])) {
        $item['phone'] = $entity->field_phone[$lang][0]['value'];
      }
      elseif (!empty($entity->field_phone[LANGUAGE_NONE][0]['value'])) {
        $item['phone'] = $entity->field_phone[LANGUAGE_NONE][0]['value'];
      }
    }
    $theme_path = drupal_get_path('theme', 'ipg');
    drupal_add_js($theme_path . '/scripts/field_user.js');
  }
  elseif ($variables['element']['#field_name'] == 'field_body') {
    $variables['theme_hook_suggestion'] = 'field__body';
  }
}

/**
 * Override theme_date_display_range().
 */
function ipg_date_display_range($variables) {
  $date1 = $variables['date1'];
  $date2 = $variables['date2'];
  $timezone = $variables['timezone'];
  $attributes_start = $variables['attributes_start'];
  $attributes_end = $variables['attributes_end'];

  $start_date = '<span class="date-display-start"' . drupal_attributes($attributes_start) . '>' . $date1 . '</span>';
  $end_date = '<span class="date-display-end"' . drupal_attributes($attributes_end) . '>' . $date2 . $timezone . '</span>';

  // If microdata attributes for the start date property have been passed in,
  // add the microdata in meta tags.
  if (!empty($variables['add_microdata'])) {
    $start_date .= '<meta' . drupal_attributes($variables['microdata']['value']['#attributes']) . '/>';
    $end_date .= '<meta' . drupal_attributes($variables['microdata']['value2']['#attributes']) . '/>';
  }

  // Wrap the result with the attributes.
  return t('!start-date - !end-date', array(
    '!start-date' => $start_date,
    '!end-date' => $end_date,
  ));
}

/**
 * Override theme_item_list().
 */
function ipg_item_list($variables) {
  $items = $variables['items'];
  $title = $variables['title'];
  $type = $variables['type'];
  $attributes = $variables['attributes'];

  $output = '';
  if (isset($title) && $title !== '') {
    $output .= '<h3>' . $title . '</h3>';
  }

  if (!empty($items)) {
    $output .= "<$type" . drupal_attributes($attributes) . '>';
    $i = 0;
    foreach ($items as $item) {
      $attributes = array();
      $children = array();
      $data = '';
      $i++;
      if (is_array($item)) {
        foreach ($item as $key => $value) {
          if ($key == 'data') {
            $data = $value;
          }
          elseif ($key == 'children') {
            $children = $value;
          }
          else {
            $attributes[$key] = $value;
          }
        }
      }
      else {
        $data = $item;
      }
      if (count($children) > 0) {
        // Render nested list.
        $data .= theme_item_list(array(
          'items' => $children,
          'title' => NULL,
          'type' => $type,
          'attributes' => $attributes,
        ));
      }
      $output .= '<li' . drupal_attributes($attributes) . '>' . $data . "</li>\n";
    }
    $output .= "</$type>";
  }

  return '<div class="item-list">' . $output . '</div>';
}
