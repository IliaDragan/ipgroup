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
        'width' => '100',
        'width_type' => '%',
        'children' => array(
          0 => 2,
          1 => 'main-row',
          2 => 1,
          3 => 3,
          4 => 4,
          5 => 5,
          6 => 8,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 't_',
          1 => 't2',
        ),
        'parent' => 'main',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 't___',
          1 => 't__',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 't',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left_6col',
          1 => 'right_12col',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'middle_6col',
          1 => 'left_6col_',
          2 => 'right_6col',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      5 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      't' => array(
        'type' => 'region',
        'title' => 'Full width: 18col',
        'width' => '1043',
        'width_type' => 'px',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      8 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      't_' => array(
        'type' => 'region',
        'title' => 'Left 12col',
        'width' => '665.5',
        'width_type' => 'px',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      't2' => array(
        'type' => 'region',
        'title' => 'Right 6col',
        'width' => '377',
        'width_type' => 'px',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      't__' => array(
        'type' => 'region',
        'title' => 'Left 12col &rarr; 6col',
        'width' => '345',
        'width_type' => 'px',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      't___' => array(
        'type' => 'region',
        'title' => 'Left 12col &rarr; 6col',
        'width' => '347',
        'width_type' => 'px',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      'left_6col' => array(
        'type' => 'region',
        'title' => 'Left 6col',
        'width' => '346.5',
        'width_type' => 'px',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      'right_12col' => array(
        'type' => 'region',
        'title' => 'Right 12col',
        'width' => '696',
        'width_type' => 'px',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      'left_6col_' => array(
        'type' => 'region',
        'title' => 'Middle 6col',
        'width' => '343',
        'width_type' => 'px',
        'parent' => '4',
        'class' => '',
        'hide_empty' => 0,
      ),
      'middle_6col' => array(
        'type' => 'region',
        'title' => 'Left 6col',
        'width' => '348',
        'width_type' => 'px',
        'parent' => '4',
        'class' => '',
        'hide_empty' => 0,
      ),
      'right_6col' => array(
        'type' => 'region',
        'title' => 'Right 6col',
        'width' => '351',
        'width_type' => 'px',
        'parent' => '4',
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
      'article2' => NULL,
      'header' => NULL,
      't1' => NULL,
      't2' => NULL,
      't3' => NULL,
      't3_' => NULL,
      'd1' => NULL,
      'd2' => NULL,
      'a1' => NULL,
      'a2' => NULL,
      'a3' => NULL,
      'left_12col' => NULL,
      'left_12col__rarr__6co' => NULL,
      't' => NULL,
      's' => NULL,
      't_' => NULL,
      't__' => NULL,
      't___' => NULL,
      'left_6col' => NULL,
      'right_12col' => NULL,
      'left_6col_' => NULL,
      'middle_6col' => NULL,
      'right_6col' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '831e30b9-0bff-4f1e-8a1c-52a778d1f6de';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6505c56f-401f-428c-8e8d-d6c0d629d259';
    $pane->panel = 't__';
    $pane->type = 'pco_blocks';
    $pane->subtype = 'pco_blocks';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '4',
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
    $pane->uuid = '6505c56f-401f-428c-8e8d-d6c0d629d259';
    $display->content['new-6505c56f-401f-428c-8e8d-d6c0d629d259'] = $pane;
    $display->panels['t__'][0] = 'new-6505c56f-401f-428c-8e8d-d6c0d629d259';
    $pane = new stdClass();
    $pane->pid = 'new-dcfd88ae-2fec-41e2-92d9-2521a875b3ea';
    $pane->panel = 't__';
    $pane->type = 'pco_blocks';
    $pane->subtype = 'pco_blocks';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '1',
      'bgcolor' => 'orange',
      'titlesize' => 'h2',
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
    $pane->uuid = 'dcfd88ae-2fec-41e2-92d9-2521a875b3ea';
    $display->content['new-dcfd88ae-2fec-41e2-92d9-2521a875b3ea'] = $pane;
    $display->panels['t__'][1] = 'new-dcfd88ae-2fec-41e2-92d9-2521a875b3ea';
    $pane = new stdClass();
    $pane->pid = 'new-03703e18-7c07-40fd-92ea-5c63ec0e747d';
    $pane->panel = 't__';
    $pane->type = 'pco_blocks';
    $pane->subtype = 'pco_blocks';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '3',
      'bgcolor' => 'dark',
      'titlesize' => 'h2',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '03703e18-7c07-40fd-92ea-5c63ec0e747d';
    $display->content['new-03703e18-7c07-40fd-92ea-5c63ec0e747d'] = $pane;
    $display->panels['t__'][2] = 'new-03703e18-7c07-40fd-92ea-5c63ec0e747d';
    $pane = new stdClass();
    $pane->pid = 'new-272823b8-6b05-4dcd-adc0-26ade3ecd694';
    $pane->panel = 't___';
    $pane->type = 'pco_blocks';
    $pane->subtype = 'pco_blocks';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '1',
      'bgcolor' => 'orange',
      'titlesize' => 'h1',
      'image' => '1',
      'category' => 1,
      'teaser' => 1,
      'override_title' => 0,
      'override_title_text' => 't',
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
    $pane->uuid = '272823b8-6b05-4dcd-adc0-26ade3ecd694';
    $display->content['new-272823b8-6b05-4dcd-adc0-26ade3ecd694'] = $pane;
    $display->panels['t___'][0] = 'new-272823b8-6b05-4dcd-adc0-26ade3ecd694';
    $pane = new stdClass();
    $pane->pid = 'new-bae737ae-ec1e-4f2f-a729-aab8f1a1dbe6';
    $pane->panel = 't___';
    $pane->type = 'pco_blocks';
    $pane->subtype = 'pco_blocks';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '3',
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
    $pane->uuid = 'bae737ae-ec1e-4f2f-a729-aab8f1a1dbe6';
    $display->content['new-bae737ae-ec1e-4f2f-a729-aab8f1a1dbe6'] = $pane;
    $display->panels['t___'][1] = 'new-bae737ae-ec1e-4f2f-a729-aab8f1a1dbe6';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_articles__article1';
  $handler->task = 'page';
  $handler->subtask = 'articles';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Article1',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'article1',
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
          0 => 1,
          1 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(),
        'parent' => 'main',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 2,
          1 => 3,
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'column',
        'width' => '100',
        'width_type' => '%',
        'parent' => '1',
        'children' => array(
          0 => 6,
          1 => 4,
        ),
        'class' => '',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'column',
        'width' => '248',
        'width_type' => 'px',
        'parent' => '1',
        'children' => array(
          0 => 5,
        ),
        'class' => '',
        'hide_empty' => 0,
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'a',
          1 => 'b',
          2 => 'c_',
        ),
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      5 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'c',
        ),
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      'a' => array(
        'type' => 'region',
        'title' => 'a',
        'width' => '262',
        'width_type' => 'px',
        'parent' => '4',
        'class' => '',
        'hide_empty' => 0,
      ),
      'b' => array(
        'type' => 'region',
        'title' => 'b',
        'width' => '263',
        'width_type' => 'px',
        'parent' => '4',
        'class' => '',
        'hide_empty' => 0,
      ),
      'c' => array(
        'type' => 'region',
        'title' => 'c',
        'width' => 100,
        'width_type' => '%',
        'parent' => '5',
        'class' => '',
        'hide_empty' => 0,
      ),
      6 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'a_',
        ),
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      'a_' => array(
        'type' => 'region',
        'title' => 'a',
        'width' => 100,
        'width_type' => '%',
        'parent' => '6',
        'class' => '',
        'hide_empty' => 0,
      ),
      'c_' => array(
        'type' => 'region',
        'title' => 'c',
        'width' => '237',
        'width_type' => 'px',
        'parent' => '4',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'a' => NULL,
      'b' => NULL,
      'c' => NULL,
      'a_' => NULL,
      'c_' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '61a1f7e7-4662-4e59-bcc2-05a57bc6e4dc';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d4afbda9-553c-411b-ab58-5add626d7737';
    $pane->panel = 'a';
    $pane->type = 'pco_blocks';
    $pane->subtype = 'pco_blocks';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '4',
      'bgcolor' => 'orange',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd4afbda9-553c-411b-ab58-5add626d7737';
    $display->content['new-d4afbda9-553c-411b-ab58-5add626d7737'] = $pane;
    $display->panels['a'][0] = 'new-d4afbda9-553c-411b-ab58-5add626d7737';
    $pane = new stdClass();
    $pane->pid = 'new-8477dbe4-1d28-425b-81b5-1c6431a894ee';
    $pane->panel = 'b';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8477dbe4-1d28-425b-81b5-1c6431a894ee';
    $display->content['new-8477dbe4-1d28-425b-81b5-1c6431a894ee'] = $pane;
    $display->panels['b'][0] = 'new-8477dbe4-1d28-425b-81b5-1c6431a894ee';
    $pane = new stdClass();
    $pane->pid = 'new-90737c02-87d7-41cc-ae44-d392bf96549b';
    $pane->panel = 'c_';
    $pane->type = 'pco_blocks';
    $pane->subtype = 'pco_blocks';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '3',
      'bgcolor' => 'grey',
      'titlesize' => 'h1',
      'image' => '2',
      'category' => 1,
      'teaser' => 0,
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
    $pane->uuid = '90737c02-87d7-41cc-ae44-d392bf96549b';
    $display->content['new-90737c02-87d7-41cc-ae44-d392bf96549b'] = $pane;
    $display->panels['c_'][0] = 'new-90737c02-87d7-41cc-ae44-d392bf96549b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['articles'] = $page;

  return $pages;

}
