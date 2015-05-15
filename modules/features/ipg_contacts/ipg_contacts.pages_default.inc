<?php
/**
 * @file
 * ipg_contacts.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function ipg_contacts_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'contacts';
  $page->task = 'page';
  $page->admin_title = 'Contacts';
  $page->admin_description = '';
  $page->path = 'contacts';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Contacts',
    'name' => 'main-menu',
    'weight' => '6',
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
  $handler->name = 'page_contacts__panel_context_5e3604b7-7fcc-4c83-a669-eca866fa095a';
  $handler->task = 'page';
  $handler->subtask = 'contacts';
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
  $display->uuid = 'bf7ed94f-4241-44ac-9792-167f10a282e6';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f6d048b2-e672-4370-8e0a-81ffbd9b7da0';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'ipgroup',
      'title' => 'IPGroup',
      'body' => '<p><strong style="margin: 0px; padding: 0px; color: rgb(55, 55, 55); font-family: Arial, Helvetica, sans-serif; font-size: 14px; line-height: 19.6000003814697px;">Adresa:&nbsp;</strong><span style="color: rgb(55, 55, 55); font-family: Arial, Helvetica, sans-serif; font-size: 14px; line-height: 19.6000003814697px;">Republica Moldova, or. Chișinău, str. Ismail 58/1, of.3</span></p><p><strong style="color: rgb(55, 55, 55); font-family: Arial, Helvetica, sans-serif; font-size: 14px; line-height: 19.6000003814697px; margin: 0px; padding: 0px;">Telefon:&nbsp;</strong><span style="color: rgb(55, 55, 55); font-family: Arial, Helvetica, sans-serif; font-size: 14px; line-height: 19.6000003814697px;">(+373 22) 000000</span></p><p><strong style="color: rgb(55, 55, 55); font-family: Arial, Helvetica, sans-serif; font-size: 14px; line-height: 19.6000003814697px; margin: 0px; padding: 0px;">Telefon/fax: </strong><span style="color: rgb(55, 55, 55); font-family: Arial, Helvetica, sans-serif; font-size: 14px; line-height: 19.6000003814697px;">(+373 22) 270000</span></p>
<pre style="margin: 0px 0px 15px; padding: 0px; color: rgb(55, 55, 55); font-family: Arial, Helvetica, sans-serif; font-size: 14px; line-height: 19.6000003814697px;">
<strong style="margin: 0px; padding: 0px;">E-mail: </strong>ipg@ipgroup.com</pre>
<p>&nbsp;</p>',
      'format' => 'wysiwyg_',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f6d048b2-e672-4370-8e0a-81ffbd9b7da0';
    $display->content['new-f6d048b2-e672-4370-8e0a-81ffbd9b7da0'] = $pane;
    $display->panels['left'][0] = 'new-f6d048b2-e672-4370-8e0a-81ffbd9b7da0';
    $pane = new stdClass();
    $pane->pid = 'new-88b4970a-0c10-4a7a-a10f-e2481a9664f8';
    $pane->panel = 'left';
    $pane->type = 'views';
    $pane->subtype = 'address_company';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
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
    $pane->uuid = '88b4970a-0c10-4a7a-a10f-e2481a9664f8';
    $display->content['new-88b4970a-0c10-4a7a-a10f-e2481a9664f8'] = $pane;
    $display->panels['left'][1] = 'new-88b4970a-0c10-4a7a-a10f-e2481a9664f8';
    $pane = new stdClass();
    $pane->pid = 'new-fb06bb30-5ff3-4deb-828b-800c74e58524';
    $pane->panel = 'right';
    $pane->type = 'contact';
    $pane->subtype = 'contact';
    $pane->shown = TRUE;
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
    $pane->uuid = 'fb06bb30-5ff3-4deb-828b-800c74e58524';
    $display->content['new-fb06bb30-5ff3-4deb-828b-800c74e58524'] = $pane;
    $display->panels['right'][0] = 'new-fb06bb30-5ff3-4deb-828b-800c74e58524';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-f6d048b2-e672-4370-8e0a-81ffbd9b7da0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['contacts'] = $page;

  return $pages;

}
