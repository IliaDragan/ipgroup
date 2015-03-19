<?php
/**
 * @file
 * ipg_event.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ipg_event_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__event';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Event',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'event',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'event' => 'event',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
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
          0 => 'event',
          1 => 'author',
        ),
        'parent' => 'main',
      ),
      'event' => array(
        'type' => 'region',
        'title' => 'Event',
        'width' => '717.5',
        'width_type' => 'px',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      'author' => array(
        'type' => 'region',
        'title' => 'Author',
        'width' => '325',
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
      'event' => NULL,
      'author' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '6428e398-d870-4f9e-977b-8ee5ca4b2bc6';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2966d689-f96d-42df-88ed-a7f43041c561';
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
    $pane->uuid = '2966d689-f96d-42df-88ed-a7f43041c561';
    $display->content['new-2966d689-f96d-42df-88ed-a7f43041c561'] = $pane;
    $display->panels['author'][0] = 'new-2966d689-f96d-42df-88ed-a7f43041c561';
    $pane = new stdClass();
    $pane->pid = 'new-4e25b2c1-2a92-4b64-9d73-efa72b9a5e01';
    $pane->panel = 'event';
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
        'image_style' => '',
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
    $pane->uuid = '4e25b2c1-2a92-4b64-9d73-efa72b9a5e01';
    $display->content['new-4e25b2c1-2a92-4b64-9d73-efa72b9a5e01'] = $pane;
    $display->panels['event'][0] = 'new-4e25b2c1-2a92-4b64-9d73-efa72b9a5e01';
    $pane = new stdClass();
    $pane->pid = 'new-0ff7dcb3-7431-4d3d-abba-ff2fc9554b1b';
    $pane->panel = 'event';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_category_event';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0ff7dcb3-7431-4d3d-abba-ff2fc9554b1b';
    $display->content['new-0ff7dcb3-7431-4d3d-abba-ff2fc9554b1b'] = $pane;
    $display->panels['event'][1] = 'new-0ff7dcb3-7431-4d3d-abba-ff2fc9554b1b';
    $pane = new stdClass();
    $pane->pid = 'new-3ece0496-d6c6-44e0-b9f6-a753a1825b69';
    $pane->panel = 'event';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '3ece0496-d6c6-44e0-b9f6-a753a1825b69';
    $display->content['new-3ece0496-d6c6-44e0-b9f6-a753a1825b69'] = $pane;
    $display->panels['event'][2] = 'new-3ece0496-d6c6-44e0-b9f6-a753a1825b69';
    $pane = new stdClass();
    $pane->pid = 'new-b87feb65-8b10-49b4-9d8f-802190e029cc';
    $pane->panel = 'event';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_date';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
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
      'override_title' => 1,
      'override_title_text' => 'Date',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'b87feb65-8b10-49b4-9d8f-802190e029cc';
    $display->content['new-b87feb65-8b10-49b4-9d8f-802190e029cc'] = $pane;
    $display->panels['event'][3] = 'new-b87feb65-8b10-49b4-9d8f-802190e029cc';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__event'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function ipg_event_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'events';
  $page->task = 'page';
  $page->admin_title = 'Events';
  $page->admin_description = '';
  $page->path = 'events';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Events',
    'name' => 'main-menu',
    'weight' => '2',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_events__panel_context_cd5cdd79-8e38-49ec-8de9-0c3fdef7a3be';
  $handler->task = 'page';
  $handler->subtask = 'events';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '23dedaf8-e254-4f92-bb4c-cf56eb9742c9';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['events'] = $page;

  return $pages;

}
