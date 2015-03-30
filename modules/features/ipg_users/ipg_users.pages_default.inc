<?php
/**
 * @file
 * ipg_users.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function ipg_users_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'employee';
  $page->task = 'page';
  $page->admin_title = 'Employee';
  $page->admin_description = '';
  $page->path = 'employee/!user';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Employee',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'user' => array(
      'id' => 1,
      'identifier' => 'User: name',
      'name' => 'user_name',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_employee__employees_list';
  $handler->task = 'page';
  $handler->subtask = 'employee';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Employees list',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'page-employees',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'employees_list',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'context_exists',
          'settings' => array(
            'exists' => '0',
          ),
          'context' => 'argument_user_name_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
    'left' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '1d42257f-ddd2-4c0f-a000-76325d397423';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-760d310c-acfa-44d2-855f-c400696746b6';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'employees_list-employees_list_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'path' => '',
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
    $pane->uuid = '760d310c-acfa-44d2-855f-c400696746b6';
    $display->content['new-760d310c-acfa-44d2-855f-c400696746b6'] = $pane;
    $display->panels['left'][0] = 'new-760d310c-acfa-44d2-855f-c400696746b6';
    $pane = new stdClass();
    $pane->pid = 'new-7e2db371-8b49-48e9-8b06-8d23c2b2ec7b';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'employees_list-employees_names_pane';
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
    $pane->uuid = '7e2db371-8b49-48e9-8b06-8d23c2b2ec7b';
    $display->content['new-7e2db371-8b49-48e9-8b06-8d23c2b2ec7b'] = $pane;
    $display->panels['right'][0] = 'new-7e2db371-8b49-48e9-8b06-8d23c2b2ec7b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_employee__emoloyee';
  $handler->task = 'page';
  $handler->subtask = 'employee';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Emoloyee',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'emoloyee',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'context_exists',
          'settings' => array(
            'exists' => '1',
          ),
          'context' => 'argument_user_name_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%user:field_name';
  $display->uuid = '9ebbd890-81cc-40d8-ade3-8544279da1b1';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c068cdaf-57c4-43ad-b651-7e4e4f2fe5b2';
    $pane->panel = 'left';
    $pane->type = 'user_profile';
    $pane->subtype = 'user_profile';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_entity_id:user_1',
      'override_title' => 1,
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
    $pane->uuid = 'c068cdaf-57c4-43ad-b651-7e4e4f2fe5b2';
    $display->content['new-c068cdaf-57c4-43ad-b651-7e4e4f2fe5b2'] = $pane;
    $display->panels['left'][0] = 'new-c068cdaf-57c4-43ad-b651-7e4e4f2fe5b2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-c068cdaf-57c4-43ad-b651-7e4e4f2fe5b2';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['employee'] = $page;

  return $pages;

}
