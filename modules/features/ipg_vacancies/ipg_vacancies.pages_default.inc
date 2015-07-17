<?php
/**
 * @file
 * ipg_vacancies.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ipg_vacancies_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__vacancy';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'Vacancy',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'vacancy',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'article' => 'article',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'entity_field_value:node:article:field_category',
          'settings' => array(
            'field_category' => array(
              'und' => array(
                0 => array(
                  'tid' => '27',
                ),
              ),
            ),
            'field_category_tid' => array(
              0 => '27',
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
  $display->uuid = 'e78dc3d5-fb10-4f4b-98e9-fa6c206a37f9';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-474ee7ad-7362-4441-adf8-47a82704b5fd';
    $pane->panel = 'left-3';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h2',
      'class' => '',
      'id' => '',
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
    $pane->uuid = '474ee7ad-7362-4441-adf8-47a82704b5fd';
    $display->content['new-474ee7ad-7362-4441-adf8-47a82704b5fd'] = $pane;
    $display->panels['left-3'][0] = 'new-474ee7ad-7362-4441-adf8-47a82704b5fd';
    $pane = new stdClass();
    $pane->pid = 'new-7096bd25-90cf-4c5f-bf46-fbc645706681';
    $pane->panel = 'left-3';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
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
    $pane->uuid = '7096bd25-90cf-4c5f-bf46-fbc645706681';
    $display->content['new-7096bd25-90cf-4c5f-bf46-fbc645706681'] = $pane;
    $display->panels['left-3'][1] = 'new-7096bd25-90cf-4c5f-bf46-fbc645706681';
    $pane = new stdClass();
    $pane->pid = 'new-2830f58e-314b-418c-9d4b-b1c28919e576';
    $pane->panel = 'right-3';
    $pane->type = 'views_panes';
    $pane->subtype = 'article-vacancies_list_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '',
      ),
      'override_title' => 1,
      'override_title_text' => 'Wanted',
      'override_title_heading' => 'h2',
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2830f58e-314b-418c-9d4b-b1c28919e576';
    $display->content['new-2830f58e-314b-418c-9d4b-b1c28919e576'] = $pane;
    $display->panels['right-3'][0] = 'new-2830f58e-314b-418c-9d4b-b1c28919e576';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__vacancy'] = $handler;

  return $export;
}

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
    $pane->pid = 'new-234167d2-378a-4bd1-a870-e34f661682bc';
    $pane->panel = 'left-3';
    $pane->type = 'block';
    $pane->subtype = 'ipg_common-text_before_vacancies';
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
    $pane->uuid = '234167d2-378a-4bd1-a870-e34f661682bc';
    $display->content['new-234167d2-378a-4bd1-a870-e34f661682bc'] = $pane;
    $display->panels['left-3'][0] = 'new-234167d2-378a-4bd1-a870-e34f661682bc';
    $pane = new stdClass();
    $pane->pid = 'new-2a285684-43b8-4155-a86e-8ccfa06799c2';
    $pane->panel = 'left-3';
    $pane->type = 'views_panes';
    $pane->subtype = 'article-vacancies_list_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'empty',
      ),
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '2a285684-43b8-4155-a86e-8ccfa06799c2';
    $display->content['new-2a285684-43b8-4155-a86e-8ccfa06799c2'] = $pane;
    $display->panels['left-3'][1] = 'new-2a285684-43b8-4155-a86e-8ccfa06799c2';
    $pane = new stdClass();
    $pane->pid = 'new-8629d69f-717a-42f4-9d7c-dc90beb64e3d';
    $pane->panel = 'left-3';
    $pane->type = 'block';
    $pane->subtype = 'ipg_common-text_after_vacancies';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '8629d69f-717a-42f4-9d7c-dc90beb64e3d';
    $display->content['new-8629d69f-717a-42f4-9d7c-dc90beb64e3d'] = $pane;
    $display->panels['left-3'][2] = 'new-8629d69f-717a-42f4-9d7c-dc90beb64e3d';
    $pane = new stdClass();
    $pane->pid = 'new-880e8633-c392-411f-a8d8-df1a3c99bcdc';
    $pane->panel = 'left-3';
    $pane->type = 'block';
    $pane->subtype = 'ipg_common-three_articles';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Read also',
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
    $pane->uuid = '880e8633-c392-411f-a8d8-df1a3c99bcdc';
    $display->content['new-880e8633-c392-411f-a8d8-df1a3c99bcdc'] = $pane;
    $display->panels['left-3'][3] = 'new-880e8633-c392-411f-a8d8-df1a3c99bcdc';
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
