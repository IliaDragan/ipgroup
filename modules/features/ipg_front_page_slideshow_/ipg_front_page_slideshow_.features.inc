<?php
/**
 * @file
 * ipg_front_page_slideshow_.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ipg_front_page_slideshow__ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ipg_front_page_slideshow__views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function ipg_front_page_slideshow__image_default_styles() {
  $styles = array();

  // Exported image style: 960x500.
  $styles['960x500'] = array(
    'label' => '960x500',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 960,
          'height' => 300,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
