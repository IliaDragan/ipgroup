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
    'title' => 'Employees',
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
    $pane->pid = 'new-7dcce032-1fb6-44c7-a64f-dcc0cac33786';
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
    $pane->uuid = '7dcce032-1fb6-44c7-a64f-dcc0cac33786';
    $display->content['new-7dcce032-1fb6-44c7-a64f-dcc0cac33786'] = $pane;
    $display->panels['left'][0] = 'new-7dcce032-1fb6-44c7-a64f-dcc0cac33786';
    $pane = new stdClass();
    $pane->pid = 'new-e3328d6a-3ea4-46a8-9689-6f48d425d1c7';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'departments-employees_departments_pane';
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
    $pane->uuid = 'e3328d6a-3ea4-46a8-9689-6f48d425d1c7';
    $display->content['new-e3328d6a-3ea4-46a8-9689-6f48d425d1c7'] = $pane;
    $display->panels['right'][0] = 'new-e3328d6a-3ea4-46a8-9689-6f48d425d1c7';
    $pane = new stdClass();
    $pane->pid = 'new-41955f69-3dbb-45be-8b7d-2bea4f2cea6e';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '41955f69-3dbb-45be-8b7d-2bea4f2cea6e';
    $display->content['new-41955f69-3dbb-45be-8b7d-2bea4f2cea6e'] = $pane;
    $display->panels['right'][1] = 'new-41955f69-3dbb-45be-8b7d-2bea4f2cea6e';
    $pane = new stdClass();
    $pane->pid = 'new-e6f83f90-c43d-432d-96c1-b605401dafb3';
    $pane->panel = 'top';
    $pane->type = 'views';
    $pane->subtype = 'owl_employee_carousel';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'owl_employee_carousel',
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
    $pane->uuid = 'e6f83f90-c43d-432d-96c1-b605401dafb3';
    $display->content['new-e6f83f90-c43d-432d-96c1-b605401dafb3'] = $pane;
    $display->panels['top'][0] = 'new-e6f83f90-c43d-432d-96c1-b605401dafb3';
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
  $display->layout = 'flex_ws';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'header' => NULL,
      'full' => NULL,
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
    $pane = new stdClass();
    $pane->pid = 'new-433e93f4-62b0-4d88-bcbf-4410f5605129';
    $pane->panel = 'right';
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
    $pane->uuid = '433e93f4-62b0-4d88-bcbf-4410f5605129';
    $display->content['new-433e93f4-62b0-4d88-bcbf-4410f5605129'] = $pane;
    $display->panels['right'][0] = 'new-433e93f4-62b0-4d88-bcbf-4410f5605129';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-c068cdaf-57c4-43ad-b651-7e4e4f2fe5b2';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['employee'] = $page;

  return $pages;

}
