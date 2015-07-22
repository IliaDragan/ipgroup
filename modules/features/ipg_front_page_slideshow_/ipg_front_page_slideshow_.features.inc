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
  if ($module == "strongarm" && $api == "strongarm") {
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

  // Exported image style: front-width-300.
  $styles['front-width-300'] = array(
    'label' => 'Front page width 300',
    'effects' => array(
      4 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 300,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function ipg_front_page_slideshow__node_info() {
  $items = array(
    'image_content' => array(
      'name' => t('Image content'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
