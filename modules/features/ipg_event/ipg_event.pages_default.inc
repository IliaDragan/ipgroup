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
    'relationships' => array(
      0 => array(
        'identifier' => 'User from Node (on node.node_author)',
        'keyword' => 'user',
        'name' => 'entity_from_schema:uid-node-user',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
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
  $display->layout = 'flex_ws';
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
        'width' => '594.125',
        'width_type' => 'px',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      'author' => array(
        'type' => 'region',
        'title' => 'Author',
        'width' => '361.125',
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
      'header' => NULL,
      'full' => NULL,
      'left' => NULL,
      'right' => NULL,
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
  $display->uuid = '6428e398-d870-4f9e-977b-8ee5ca4b2bc6';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-17005968-4702-478e-a797-482ded96b800';
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
    $pane->uuid = '17005968-4702-478e-a797-482ded96b800';
    $display->content['new-17005968-4702-478e-a797-482ded96b800'] = $pane;
    $display->panels['left-3'][0] = 'new-17005968-4702-478e-a797-482ded96b800';
    $pane = new stdClass();
    $pane->pid = 'new-5ff5de96-523b-40b3-8fda-7914c5556455';
    $pane->panel = 'left-3';
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
        'image_style' => 'image_article',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5ff5de96-523b-40b3-8fda-7914c5556455';
    $display->content['new-5ff5de96-523b-40b3-8fda-7914c5556455'] = $pane;
    $display->panels['left-3'][1] = 'new-5ff5de96-523b-40b3-8fda-7914c5556455';
    $pane = new stdClass();
    $pane->pid = 'new-024e80d7-a9e2-4b65-9ca1-1258e3b8c2a4';
    $pane->panel = 'left-3';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_date';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '024e80d7-a9e2-4b65-9ca1-1258e3b8c2a4';
    $display->content['new-024e80d7-a9e2-4b65-9ca1-1258e3b8c2a4'] = $pane;
    $display->panels['left-3'][2] = 'new-024e80d7-a9e2-4b65-9ca1-1258e3b8c2a4';
    $pane = new stdClass();
    $pane->pid = 'new-6cd8cc89-d737-48b6-a674-c6d8b4bce1f2';
    $pane->panel = 'left-3';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '6cd8cc89-d737-48b6-a674-c6d8b4bce1f2';
    $display->content['new-6cd8cc89-d737-48b6-a674-c6d8b4bce1f2'] = $pane;
    $display->panels['left-3'][3] = 'new-6cd8cc89-d737-48b6-a674-c6d8b4bce1f2';
    $pane = new stdClass();
    $pane->pid = 'new-668aa595-c2f7-407c-a55d-bebb9f933b37';
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
    $pane->uuid = '668aa595-c2f7-407c-a55d-bebb9f933b37';
    $display->content['new-668aa595-c2f7-407c-a55d-bebb9f933b37'] = $pane;
    $display->panels['right-3'][0] = 'new-668aa595-c2f7-407c-a55d-bebb9f933b37';
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
  $display->layout = 'flex';
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
          0 => 1,
        ),
        'parent' => 'canvas',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'events',
          1 => 'other',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'events' => array(
        'type' => 'region',
        'title' => 'Events',
        'width' => '568.5',
        'width_type' => 'px',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      'other' => array(
        'type' => 'region',
        'title' => 'Other',
        'width' => 286.5,
        'width_type' => 'px',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'events' => NULL,
      'other' => NULL,
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
  $display->uuid = '23dedaf8-e254-4f92-bb4c-cf56eb9742c9';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a133d3f0-8270-40cd-b21d-b96461829a3a';
    $pane->panel = 'left-2';
    $pane->type = 'pco_blocks';
    $pane->subtype = 'pco_blocks';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '56',
      'bgcolor' => 'grey',
      'titlesize' => 'h1',
      'image' => '0',
      'category' => 0,
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
    $pane->uuid = 'a133d3f0-8270-40cd-b21d-b96461829a3a';
    $display->content['new-a133d3f0-8270-40cd-b21d-b96461829a3a'] = $pane;
    $display->panels['left-2'][0] = 'new-a133d3f0-8270-40cd-b21d-b96461829a3a';
    $pane = new stdClass();
    $pane->pid = 'new-3df9420c-1cd8-498b-9e33-80195685defd';
    $pane->panel = 'left-2';
    $pane->type = 'pco_blocks';
    $pane->subtype = 'pco_blocks';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '67',
      'bgcolor' => 'dark',
      'titlesize' => 'h1',
      'image' => '0',
      'category' => 0,
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
    $pane->uuid = '3df9420c-1cd8-498b-9e33-80195685defd';
    $display->content['new-3df9420c-1cd8-498b-9e33-80195685defd'] = $pane;
    $display->panels['left-2'][1] = 'new-3df9420c-1cd8-498b-9e33-80195685defd';
    $pane = new stdClass();
    $pane->pid = 'new-b96410a5-133d-42f0-abd9-9a8766cc83f3';
    $pane->panel = 'left-2';
    $pane->type = 'pco_blocks';
    $pane->subtype = 'pco_blocks';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '72',
      'bgcolor' => 'orange',
      'titlesize' => 'h1',
      'image' => '0',
      'category' => 0,
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'b96410a5-133d-42f0-abd9-9a8766cc83f3';
    $display->content['new-b96410a5-133d-42f0-abd9-9a8766cc83f3'] = $pane;
    $display->panels['left-2'][2] = 'new-b96410a5-133d-42f0-abd9-9a8766cc83f3';
    $pane = new stdClass();
    $pane->pid = 'new-ef44d807-1ce3-4a76-b0ad-78fd9795ea46';
    $pane->panel = 'middle-2';
    $pane->type = 'pco_blocks';
    $pane->subtype = 'pco_blocks';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '63',
      'bgcolor' => 'orange',
      'titlesize' => 'h1',
      'image' => '0',
      'category' => 0,
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
    $pane->uuid = 'ef44d807-1ce3-4a76-b0ad-78fd9795ea46';
    $display->content['new-ef44d807-1ce3-4a76-b0ad-78fd9795ea46'] = $pane;
    $display->panels['middle-2'][0] = 'new-ef44d807-1ce3-4a76-b0ad-78fd9795ea46';
    $pane = new stdClass();
    $pane->pid = 'new-4afbada2-043f-47bc-8091-160ffa919789';
    $pane->panel = 'middle-2';
    $pane->type = 'pco_blocks';
    $pane->subtype = 'pco_blocks';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '64',
      'bgcolor' => 'dark',
      'titlesize' => 'h1',
      'image' => '0',
      'category' => 0,
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
    $pane->uuid = '4afbada2-043f-47bc-8091-160ffa919789';
    $display->content['new-4afbada2-043f-47bc-8091-160ffa919789'] = $pane;
    $display->panels['middle-2'][1] = 'new-4afbada2-043f-47bc-8091-160ffa919789';
    $pane = new stdClass();
    $pane->pid = 'new-b2dac6fa-78df-43f6-b638-02b10ef7ad70';
    $pane->panel = 'middle-2';
    $pane->type = 'pco_blocks';
    $pane->subtype = 'pco_blocks';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '70',
      'bgcolor' => 'grey',
      'titlesize' => 'h1',
      'image' => '0',
      'category' => 0,
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'b2dac6fa-78df-43f6-b638-02b10ef7ad70';
    $display->content['new-b2dac6fa-78df-43f6-b638-02b10ef7ad70'] = $pane;
    $display->panels['middle-2'][2] = 'new-b2dac6fa-78df-43f6-b638-02b10ef7ad70';
    $pane = new stdClass();
    $pane->pid = 'new-c374962e-a87c-40d3-9e7f-3c5bedd0c1bc';
    $pane->panel = 'middle-2';
    $pane->type = 'pco_blocks';
    $pane->subtype = 'pco_blocks';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '74',
      'bgcolor' => 'orange',
      'titlesize' => 'h1',
      'image' => '0',
      'category' => 0,
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'c374962e-a87c-40d3-9e7f-3c5bedd0c1bc';
    $display->content['new-c374962e-a87c-40d3-9e7f-3c5bedd0c1bc'] = $pane;
    $display->panels['middle-2'][3] = 'new-c374962e-a87c-40d3-9e7f-3c5bedd0c1bc';
    $pane = new stdClass();
    $pane->pid = 'new-f86691e0-d9ea-48ce-b37a-4362564ef04a';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f86691e0-d9ea-48ce-b37a-4362564ef04a';
    $display->content['new-f86691e0-d9ea-48ce-b37a-4362564ef04a'] = $pane;
    $display->panels['right-2'][0] = 'new-f86691e0-d9ea-48ce-b37a-4362564ef04a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['events'] = $page;

  return $pages;

}
