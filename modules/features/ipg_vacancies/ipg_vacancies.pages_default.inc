<?php
/**
 * @file
 * ipg_vacancies.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function ipg_vacancies_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'vacancies';
  $page->task = 'page';
  $page->admin_title = 'Vacancies';
  $page->admin_description = '';
  $page->path = 'vacancies';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Vacancies',
    'name' => 'main-menu',
    'weight' => '3',
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
  $handler->name = 'page_vacancies__panel_context_e2022ca7-37ef-491a-a91c-9b85f949497f';
  $handler->task = 'page';
  $handler->subtask = 'vacancies';
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
  $display->layout = 'flex_ws';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'header' => NULL,
      'full' => NULL,
      'full-1' => NULL,
      'left-3' => NULL,
      'right-3' => NULL,
      'left-4' => NULL,
      'right-4' => NULL,
      'left-4-res' => NULL,
      'right-4-res' => NULL,
      'left-5' => NULL,
      'middle-5' => NULL,
      'right-5' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f2cf0208-6d18-43b0-817b-471fcd435bf5';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2a285684-43b8-4155-a86e-8ccfa06799c2';
    $pane->panel = 'left-3';
    $pane->type = 'views_panes';
    $pane->subtype = 'article-vacancies_list_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2a285684-43b8-4155-a86e-8ccfa06799c2';
    $display->content['new-2a285684-43b8-4155-a86e-8ccfa06799c2'] = $pane;
    $display->panels['left-3'][0] = 'new-2a285684-43b8-4155-a86e-8ccfa06799c2';
    $pane = new stdClass();
    $pane->pid = 'new-5a7dbe31-b901-4c3b-b774-d4539bba212c';
    $pane->panel = 'right-3';
    $pane->type = 'views';
    $pane->subtype = 'new_event';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '3',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'override_title' => 0,
      'override_title_text' => 'Upcoming event',
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
    $pane->uuid = '5a7dbe31-b901-4c3b-b774-d4539bba212c';
    $display->content['new-5a7dbe31-b901-4c3b-b774-d4539bba212c'] = $pane;
    $display->panels['right-3'][0] = 'new-5a7dbe31-b901-4c3b-b774-d4539bba212c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['vacancies'] = $page;

  return $pages;

}
