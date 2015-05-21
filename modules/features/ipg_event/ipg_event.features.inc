<?php
/**
 * @file
 * ipg_event.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ipg_event_ctools_plugin_api($module = NULL, $api = NULL) {
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
function ipg_event_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function ipg_event_image_default_styles() {
  $styles = array();

  // Exported image style: image_views_event.
  $styles['image_views_event'] = array(
    'label' => 'image_views_event',
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 200,
          'height' => 150,
          'upscale' => 0,
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
function ipg_event_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titlu'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
