<?php
/**
 * @file
 * ipg_article.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ipg_article_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__article';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Article',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'article',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'article',
          1 => 'author',
        ),
        'parent' => 'main',
      ),
      'article' => array(
        'type' => 'region',
        'title' => 'Article',
        'width' => '569.5',
        'width_type' => 'px',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      'author' => array(
        'type' => 'region',
        'title' => 'Author',
        'width' => '286.5',
        'width_type' => 'px',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'article' => NULL,
      'author' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '097364cc-90cf-46a5-9091-c1749f29f61a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-87be8f37-6dda-4857-9901-20816a82c68a';
    $pane->panel = 'article';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'thumbnail',
        'image_link' => '',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '87be8f37-6dda-4857-9901-20816a82c68a';
    $display->content['new-87be8f37-6dda-4857-9901-20816a82c68a'] = $pane;
    $display->panels['article'][0] = 'new-87be8f37-6dda-4857-9901-20816a82c68a';
    $pane = new stdClass();
    $pane->pid = 'new-41ee7d34-e9f0-4a7f-ba95-557639d928cb';
    $pane->panel = 'article';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_plain',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '41ee7d34-e9f0-4a7f-ba95-557639d928cb';
    $display->content['new-41ee7d34-e9f0-4a7f-ba95-557639d928cb'] = $pane;
    $display->panels['article'][1] = 'new-41ee7d34-e9f0-4a7f-ba95-557639d928cb';
    $pane = new stdClass();
    $pane->pid = 'new-9c19830c-d66e-400a-af04-6c0a674ed8f0';
    $pane->panel = 'article';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_category';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '9c19830c-d66e-400a-af04-6c0a674ed8f0';
    $display->content['new-9c19830c-d66e-400a-af04-6c0a674ed8f0'] = $pane;
    $display->panels['article'][2] = 'new-9c19830c-d66e-400a-af04-6c0a674ed8f0';
    $pane = new stdClass();
    $pane->pid = 'new-38dd4ece-6192-4d4f-bb85-dea8ed35ff47';
    $pane->panel = 'article';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_time_of_publishing';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'date_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'format_type' => 'short',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'fromto' => 'both',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '38dd4ece-6192-4d4f-bb85-dea8ed35ff47';
    $display->content['new-38dd4ece-6192-4d4f-bb85-dea8ed35ff47'] = $pane;
    $display->panels['article'][3] = 'new-38dd4ece-6192-4d4f-bb85-dea8ed35ff47';
    $pane = new stdClass();
    $pane->pid = 'new-941ad614-bce3-4d15-a079-da7fba85cc2e';
    $pane->panel = 'author';
    $pane->type = 'node_author';
    $pane->subtype = 'node_author';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '941ad614-bce3-4d15-a079-da7fba85cc2e';
    $display->content['new-941ad614-bce3-4d15-a079-da7fba85cc2e'] = $pane;
    $display->panels['author'][0] = 'new-941ad614-bce3-4d15-a079-da7fba85cc2e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__article'] = $handler;

  return $export;
}
