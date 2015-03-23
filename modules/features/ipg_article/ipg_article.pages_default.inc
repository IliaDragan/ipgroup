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
          0 => 'article',
          1 => 'author',
        ),
        'parent' => 'main',
      ),
      'article' => array(
        'type' => 'region',
        'title' => 'Article',
        'width' => '520.5625',
        'width_type' => 'px',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      'author' => array(
        'type' => 'region',
        'title' => 'Author',
        'width' => '272.5625',
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
    'author' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '097364cc-90cf-46a5-9091-c1749f29f61a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d49c7231-3720-4f47-aa14-6513de125782';
    $pane->panel = 'article';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Articles',
      'title' => 'Articles',
      'body' => '',
      'format' => 'filtered_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd49c7231-3720-4f47-aa14-6513de125782';
    $display->content['new-d49c7231-3720-4f47-aa14-6513de125782'] = $pane;
    $display->panels['article'][0] = 'new-d49c7231-3720-4f47-aa14-6513de125782';
    $pane = new stdClass();
    $pane->pid = 'new-aec8c1d0-6173-42f0-b034-1b3cf448a26d';
    $pane->panel = 'article';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'aec8c1d0-6173-42f0-b034-1b3cf448a26d';
    $display->content['new-aec8c1d0-6173-42f0-b034-1b3cf448a26d'] = $pane;
    $display->panels['article'][1] = 'new-aec8c1d0-6173-42f0-b034-1b3cf448a26d';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '87be8f37-6dda-4857-9901-20816a82c68a';
    $display->content['new-87be8f37-6dda-4857-9901-20816a82c68a'] = $pane;
    $display->panels['article'][2] = 'new-87be8f37-6dda-4857-9901-20816a82c68a';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '41ee7d34-e9f0-4a7f-ba95-557639d928cb';
    $display->content['new-41ee7d34-e9f0-4a7f-ba95-557639d928cb'] = $pane;
    $display->panels['article'][3] = 'new-41ee7d34-e9f0-4a7f-ba95-557639d928cb';
    $pane = new stdClass();
    $pane->pid = 'new-9c19830c-d66e-400a-af04-6c0a674ed8f0';
    $pane->panel = 'article';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_category';
    $pane->shown = FALSE;
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '9c19830c-d66e-400a-af04-6c0a674ed8f0';
    $display->content['new-9c19830c-d66e-400a-af04-6c0a674ed8f0'] = $pane;
    $display->panels['article'][4] = 'new-9c19830c-d66e-400a-af04-6c0a674ed8f0';
    $pane = new stdClass();
    $pane->pid = 'new-d3dc345f-d773-475e-8106-70d158dbaef9';
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
    $pane->uuid = 'd3dc345f-d773-475e-8106-70d158dbaef9';
    $display->content['new-d3dc345f-d773-475e-8106-70d158dbaef9'] = $pane;
    $display->panels['author'][0] = 'new-d3dc345f-d773-475e-8106-70d158dbaef9';
    $pane = new stdClass();
    $pane->pid = 'new-b1d392ea-ed6c-4704-ae9e-bd63d27be6e2';
    $pane->panel = 'author';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b1d392ea-ed6c-4704-ae9e-bd63d27be6e2';
    $display->content['new-b1d392ea-ed6c-4704-ae9e-bd63d27be6e2'] = $pane;
    $display->panels['author'][1] = 'new-b1d392ea-ed6c-4704-ae9e-bd63d27be6e2';
    $pane = new stdClass();
    $pane->pid = 'new-806333af-2f3a-410f-81cd-cde3eaaeacfd';
    $pane->panel = 'author';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_time_of_publishing';
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
    $pane->uuid = '806333af-2f3a-410f-81cd-cde3eaaeacfd';
    $display->content['new-806333af-2f3a-410f-81cd-cde3eaaeacfd'] = $pane;
    $display->panels['author'][2] = 'new-806333af-2f3a-410f-81cd-cde3eaaeacfd';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__article'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function ipg_article_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'articles';
  $page->task = 'page';
  $page->admin_title = 'Articles';
  $page->admin_description = '';
  $page->path = 'articles';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Articles',
    'name' => 'main-menu',
    'weight' => '1',
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
  $handler->name = 'page_articles__panel_context_9c3a3fb6-0ef5-4075-b0c6-8022b9a346e1';
  $handler->task = 'page';
  $handler->subtask = 'articles';
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
          0 => 'articles',
          1 => 'other',
        ),
        'parent' => 'main',
      ),
      'articles' => array(
        'type' => 'region',
        'title' => 'Articles',
        'width' => '806.5',
        'width_type' => 'px',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      'other' => array(
        'type' => 'region',
        'title' => 'other',
        'width' => '228.5',
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
      'articles' => NULL,
      'other' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '831e30b9-0bff-4f1e-8a1c-52a778d1f6de';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d8cb307f-d72e-4cfd-bdb3-8e93285319ac';
    $pane->panel = 'articles';
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
    $pane->uuid = 'd8cb307f-d72e-4cfd-bdb3-8e93285319ac';
    $display->content['new-d8cb307f-d72e-4cfd-bdb3-8e93285319ac'] = $pane;
    $display->panels['articles'][0] = 'new-d8cb307f-d72e-4cfd-bdb3-8e93285319ac';
    $pane = new stdClass();
    $pane->pid = 'new-b545eaac-0f7f-42fc-8044-99a3217ff0b1';
    $pane->panel = 'articles';
    $pane->type = 'block';
    $pane->subtype = 'views-article-block';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b545eaac-0f7f-42fc-8044-99a3217ff0b1';
    $display->content['new-b545eaac-0f7f-42fc-8044-99a3217ff0b1'] = $pane;
    $display->panels['articles'][1] = 'new-b545eaac-0f7f-42fc-8044-99a3217ff0b1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['articles'] = $page;

  return $pages;

}
