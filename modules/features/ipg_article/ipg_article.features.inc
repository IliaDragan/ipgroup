<?php
/**
 * @file
 * ipg_article.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ipg_article_ctools_plugin_api($module = NULL, $api = NULL) {
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
function ipg_article_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function ipg_article_image_default_styles() {
  $styles = array();

  // Exported image style: article_thumb.
  $styles['article_thumb'] = array(
    'label' => 'Article thumb',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 200,
          'height' => 170,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: image_06col.
  $styles['image_06col'] = array(
    'label' => 'image_06col',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 300,
          'height' => 180,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: image_09col.
  $styles['image_09col'] = array(
    'label' => 'image_09col',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 465,
          'height' => 279,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: image_10col.
  $styles['image_10col'] = array(
    'label' => 'image_10col',
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 520,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: image_article.
  $styles['image_article'] = array(
    'label' => 'image_article',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 630,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: image_views_article.
  $styles['image_views_article'] = array(
    'label' => 'image_views_article',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 200,
          'height' => 150,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: vacancy_thumb.
  $styles['vacancy_thumb'] = array(
    'label' => 'Vacancy thumb',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 100,
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
function ipg_article_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for project, vacancy, tech blog and article posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
