<?php
/**
 * @file
 * ipg_front_page_slideshow_.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ipg_front_page_slideshow__default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-front_page_slideshow-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'front_page_slideshow-block',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ipg' => array(
        'region' => 'promo',
        'status' => 1,
        'theme' => 'ipg',
        'weight' => -11,
      ),
      'omega' => array(
        'region' => 'branding',
        'status' => 1,
        'theme' => 'omega',
        'weight' => -11,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
