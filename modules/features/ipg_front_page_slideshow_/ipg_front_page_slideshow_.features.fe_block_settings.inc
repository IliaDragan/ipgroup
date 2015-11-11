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
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'air' => array(
        'region' => 'promo',
        'status' => 1,
        'theme' => 'air',
        'weight' => -11,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ipg' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ipg',
        'weight' => -17,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-front_page_slideshow-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'front_page_slideshow-block_1',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'air' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'air',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ipg' => array(
        'region' => 'promo',
        'status' => 1,
        'theme' => 'ipg',
        'weight' => 4,
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
