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
    $pane->pid = 'new-890c5cc9-018a-4ec2-ad7e-66150151cb9b';
    $pane->panel = 'left-2';
    $pane->type = 'views_panes';
    $pane->subtype = 'front_page_nodes-article_pane';
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
    $pane->locks = array(
      'type' => 'none',
      'regions' => array(
        'left-2' => 'left-2',
      ),
    );
    $pane->uuid = 'fba1d1ba-e181-4eab-86f4-dbbc6533d4da';
    $display->content['new-fba1d1ba-e181-4eab-86f4-dbbc6533d4da'] = $pane;
    $display->panels['left-2'][0] = 'new-fba1d1ba-e181-4eab-86f4-dbbc6533d4da';
    $pane = new stdClass();
    $pane->pid = 'new-08481a79-2179-4c1c-9fa3-c5ef665ceedd';
    $pane->panel = 'left-2';
    $pane->type = 'views_panes';
    $pane->subtype = 'front_page_nodes-vacancy_pane';
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
    $pane->uuid = '08481a79-2179-4c1c-9fa3-c5ef665ceedd';
    $display->content['new-08481a79-2179-4c1c-9fa3-c5ef665ceedd'] = $pane;
    $display->panels['left-2'][1] = 'new-08481a79-2179-4c1c-9fa3-c5ef665ceedd';
    $pane = new stdClass();
    $pane->pid = 'new-8c569366-cf15-489b-913a-41a27395f1e0';
    $pane->panel = 'middle-2';
    $pane->type = 'views_panes';
    $pane->subtype = 'front_page_nodes-tech_event_pane';
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
    $pane->uuid = '8c569366-cf15-489b-913a-41a27395f1e0';
    $display->content['new-8c569366-cf15-489b-913a-41a27395f1e0'] = $pane;
    $display->panels['middle-2'][0] = 'new-8c569366-cf15-489b-913a-41a27395f1e0';
    $pane = new stdClass();
    $pane->pid = 'new-2b988487-c8fb-4e7f-9b6d-12018815b7fe';
    $pane->panel = 'middle-2';
    $pane->type = 'views_panes';
    $pane->subtype = 'front_page_nodes-corporative_event_pane';
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
    $pane->uuid = '2b988487-c8fb-4e7f-9b6d-12018815b7fe';
    $display->content['new-2b988487-c8fb-4e7f-9b6d-12018815b7fe'] = $pane;
    $display->panels['middle-2'][1] = 'new-2b988487-c8fb-4e7f-9b6d-12018815b7fe';
    $pane = new stdClass();
    $pane->pid = 'new-d1abb595-d13c-4094-b85f-9871c17c907b';
    $pane->panel = 'middle-2';
    $pane->type = 'views_panes';
    $pane->subtype = 'front_page_nodes-project_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'd1abb595-d13c-4094-b85f-9871c17c907b';
    $display->content['new-d1abb595-d13c-4094-b85f-9871c17c907b'] = $pane;
    $display->panels['middle-2'][2] = 'new-d1abb595-d13c-4094-b85f-9871c17c907b';
    $pane = new stdClass();
    $pane->pid = 'new-bb1f6123-53e6-40b1-9a99-9100da44dff0';
    $pane->panel = 'right-2';
    $pane->type = 'views_panes';
    $pane->subtype = 'article-vacancies_list_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'empty',
      ),
      'override_title' => 1,
      'override_title_text' => 'Vacancies',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'front-page-vacancies',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'bb1f6123-53e6-40b1-9a99-9100da44dff0';
    $display->content['new-bb1f6123-53e6-40b1-9a99-9100da44dff0'] = $pane;
    $display->panels['right-2'][0] = 'new-bb1f6123-53e6-40b1-9a99-9100da44dff0';
    $pane = new stdClass();
    $pane->pid = 'new-5b259ad9-b9cb-44e4-93b4-4509eb02c536';
    $pane->panel = 'right-2';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5b259ad9-b9cb-44e4-93b4-4509eb02c536';
    $display->content['new-5b259ad9-b9cb-44e4-93b4-4509eb02c536'] = $pane;
    $display->panels['right-2'][1] = 'new-5b259ad9-b9cb-44e4-93b4-4509eb02c536';
    $pane = new stdClass();
    $pane->pid = 'new-7b89afb0-465b-49d6-92c3-e8493b16cf11';
    $pane->panel = 'right-2';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Facebook page plugin',
      'title' => '',
      'body' => '<div id="fb-root"></div>
<script>(function(d, s, id) {
  var js, fjs = d.getElementsByTagName(s)[0];
  if (d.getElementById(id)) return;
  js = d.createElement(s); js.id = id;
  js.src = "//connect.facebook.net/ru_RU/sdk.js#xfbml=1&version=v2.3";
  fjs.parentNode.insertBefore(js, fjs);
}(document, \'script\', \'facebook-jssdk\'));</script>
<div class="fb-page" data-href="https://www.facebook.com/IPGroupMD" data-width="300" data-small-header="false" data-adapt-container-width="true" data-hide-cover="false" data-show-facepile="true" data-show-posts="false"><div class="fb-xfbml-parse-ignore"><blockquote cite="https://www.facebook.com/IPGroupMD"><a href="https://www.facebook.com/IPGroupMD">IPGroup MD</a></blockquote></div></div>',
      'format' => 'wysiwyg_',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '7b89afb0-465b-49d6-92c3-e8493b16cf11';
    $display->content['new-7b89afb0-465b-49d6-92c3-e8493b16cf11'] = $pane;
    $display->panels['right-2'][2] = 'new-7b89afb0-465b-49d6-92c3-e8493b16cf11';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-46d00f3b-fe62-4b4a-a90f-462590283f5f';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['front_pages'] = $page;

  return $pages;

}
