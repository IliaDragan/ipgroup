<?php
/**
 * @file
 * ipg_users.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ipg_users_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ipg_users_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function ipg_users_image_default_styles() {
  $styles = array();

  // Exported image style: avatar.
  $styles['avatar'] = array(
    'label' => 'Avatar (185x185)',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 185,
          'height' => 185,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: miniavatar.
  $styles['miniavatar'] = array(
    'label' => 'Miniavatar (136x136)',
    'effects' => array(
      6 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 136,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 2,
      ),
      7 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 136,
          'height' => 136,
          'anchor' => 'center-top',
        ),
        'weight' => 3,
      ),
    ),
  );

  return $styles;
}
