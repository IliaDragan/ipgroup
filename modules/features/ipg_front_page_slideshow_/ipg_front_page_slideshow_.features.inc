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
