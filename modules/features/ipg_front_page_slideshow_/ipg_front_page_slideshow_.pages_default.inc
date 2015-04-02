<?php
/**
 * @file
 * ipg_front_page_slideshow_.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function ipg_front_page_slideshow__default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'front_pages';
  $page->task = 'page';
  $page->admin_title = 'Front Pages';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_front_pages__panel_context_5846e6c3-fe82-4320-b09e-c6b7d727938f';
  $handler->task = 'page';
  $handler->subtask = 'front_pages';
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
  $display->layout = 'flex';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'full' => NULL,
      'left' => NULL,
      'right' => NULL,
      'left-1' => NULL,
      'right-1' => NULL,
      'left-2' => NULL,
      'middle-2' => NULL,
      'right-2' => NULL,
      'full-1' => NULL,
      'left-3' => NULL,
      'left-3-2' => NULL,
      'left-3-3' => NULL,
      'right-3' => NULL,
      'left-4' => NULL,
      'right-4' => NULL,
      'left-5' => NULL,
      'middle-5' => NULL,
      'right-5' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ba747442-3d72-40ba-852a-8ca7e78709af';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-46d00f3b-fe62-4b4a-a90f-462590283f5f';
    $pane->panel = 'header';
    $pane->type = 'block';
    $pane->subtype = 'views-front_page_slideshow-block';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '46d00f3b-fe62-4b4a-a90f-462590283f5f';
    $display->content['new-46d00f3b-fe62-4b4a-a90f-462590283f5f'] = $pane;
    $display->panels['header'][0] = 'new-46d00f3b-fe62-4b4a-a90f-462590283f5f';
    $pane = new stdClass();
    $pane->pid = 'new-018eb0ad-2429-4de8-9445-6b622d30812b';
    $pane->panel = 'left-2';
    $pane->type = 'pco_blocks';
    $pane->subtype = 'pco_blocks';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '1',
      'bgcolor' => 'dark',
      'titlesize' => 'h1',
      'image' => '1',
      'category' => 1,
      'teaser' => 1,
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
    $pane->uuid = '018eb0ad-2429-4de8-9445-6b622d30812b';
    $display->content['new-018eb0ad-2429-4de8-9445-6b622d30812b'] = $pane;
    $display->panels['left-2'][0] = 'new-018eb0ad-2429-4de8-9445-6b622d30812b';
    $pane = new stdClass();
    $pane->pid = 'new-ca514d3d-7b2e-4202-92d3-b41a608a1682';
    $pane->panel = 'left-2';
    $pane->type = 'pco_blocks';
    $pane->subtype = 'pco_blocks';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '3',
      'bgcolor' => 'grey',
      'titlesize' => 'h1',
      'image' => '1',
      'category' => 1,
      'teaser' => 1,
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
    $pane->uuid = 'ca514d3d-7b2e-4202-92d3-b41a608a1682';
    $display->content['new-ca514d3d-7b2e-4202-92d3-b41a608a1682'] = $pane;
    $display->panels['left-2'][1] = 'new-ca514d3d-7b2e-4202-92d3-b41a608a1682';
    $pane = new stdClass();
    $pane->pid = 'new-58b556d8-e9e4-47c7-af89-d31b1ea5f074';
    $pane->panel = 'middle-2';
    $pane->type = 'pco_blocks';
    $pane->subtype = 'pco_blocks';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '3',
      'bgcolor' => 'orange',
      'titlesize' => 'h1',
      'image' => '0',
      'category' => 1,
      'teaser' => 1,
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
    $pane->uuid = '58b556d8-e9e4-47c7-af89-d31b1ea5f074';
    $display->content['new-58b556d8-e9e4-47c7-af89-d31b1ea5f074'] = $pane;
    $display->panels['middle-2'][0] = 'new-58b556d8-e9e4-47c7-af89-d31b1ea5f074';
    $pane = new stdClass();
    $pane->pid = 'new-9d7835b4-44f1-4380-9307-df8089c000e0';
    $pane->panel = 'middle-2';
    $pane->type = 'pco_blocks';
    $pane->subtype = 'pco_blocks';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '2',
      'bgcolor' => 'dark',
      'titlesize' => 'h1',
      'image' => '2',
      'category' => 1,
      'teaser' => 1,
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
    $pane->uuid = '9d7835b4-44f1-4380-9307-df8089c000e0';
    $display->content['new-9d7835b4-44f1-4380-9307-df8089c000e0'] = $pane;
    $display->panels['middle-2'][1] = 'new-9d7835b4-44f1-4380-9307-df8089c000e0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-46d00f3b-fe62-4b4a-a90f-462590283f5f';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['front_pages'] = $page;

  return $pages;

}
