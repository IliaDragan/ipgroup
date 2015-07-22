<?php
/**
 * @file
 * ipg_footer.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function ipg_footer_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'footer';
  $mini->category = '';
  $mini->admin_title = 'Footer';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'flex_footer';
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
      'middle' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '3c71b8d7-02cc-481a-a36e-e9c54ee88f78';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1d613851-d997-40dd-91b3-5a77db1f581c';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'block-1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '1d613851-d997-40dd-91b3-5a77db1f581c';
    $display->content['new-1d613851-d997-40dd-91b3-5a77db1f581c'] = $pane;
    $display->panels['left'][0] = 'new-1d613851-d997-40dd-91b3-5a77db1f581c';
    $pane = new stdClass();
    $pane->pid = 'new-8fff1f78-13d3-4bfd-9ae9-a20930598cef';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'block-2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '8fff1f78-13d3-4bfd-9ae9-a20930598cef';
    $display->content['new-8fff1f78-13d3-4bfd-9ae9-a20930598cef'] = $pane;
    $display->panels['middle'][0] = 'new-8fff1f78-13d3-4bfd-9ae9-a20930598cef';
    $pane = new stdClass();
    $pane->pid = 'new-24d4f923-bb69-42e9-8402-ad3b721c0f93';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'block-3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '24d4f923-bb69-42e9-8402-ad3b721c0f93';
    $display->content['new-24d4f923-bb69-42e9-8402-ad3b721c0f93'] = $pane;
    $display->panels['right'][0] = 'new-24d4f923-bb69-42e9-8402-ad3b721c0f93';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['footer'] = $mini;

  return $export;
}
