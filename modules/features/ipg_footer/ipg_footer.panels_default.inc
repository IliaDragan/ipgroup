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
    $pane->pid = 'new-1a303db0-38af-4e44-bead-0a53f9166765';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'block-4';
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
    $pane->uuid = '1a303db0-38af-4e44-bead-0a53f9166765';
    $display->content['new-1a303db0-38af-4e44-bead-0a53f9166765'] = $pane;
    $display->panels['left'][0] = 'new-1a303db0-38af-4e44-bead-0a53f9166765';
    $pane = new stdClass();
    $pane->pid = 'new-abc05d79-948c-4f8b-b5b9-776c35fc5426';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'block-7';
    $pane->shown = FALSE;
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'abc05d79-948c-4f8b-b5b9-776c35fc5426';
    $display->content['new-abc05d79-948c-4f8b-b5b9-776c35fc5426'] = $pane;
    $display->panels['left'][1] = 'new-abc05d79-948c-4f8b-b5b9-776c35fc5426';
    $pane = new stdClass();
    $pane->pid = 'new-753c4be0-24ec-4b22-9dbe-2a1a0e6d22fe';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'block-6';
    $pane->shown = FALSE;
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '753c4be0-24ec-4b22-9dbe-2a1a0e6d22fe';
    $display->content['new-753c4be0-24ec-4b22-9dbe-2a1a0e6d22fe'] = $pane;
    $display->panels['left'][2] = 'new-753c4be0-24ec-4b22-9dbe-2a1a0e6d22fe';
    $pane = new stdClass();
    $pane->pid = 'new-4e6dd60e-7f14-401a-8023-0412443cfa7e';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'block-5';
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
    $pane->uuid = '4e6dd60e-7f14-401a-8023-0412443cfa7e';
    $display->content['new-4e6dd60e-7f14-401a-8023-0412443cfa7e'] = $pane;
    $display->panels['middle'][0] = 'new-4e6dd60e-7f14-401a-8023-0412443cfa7e';
    $pane = new stdClass();
    $pane->pid = 'new-0c6d8275-c7bd-4d0d-9a11-69e73a17f8b6';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'block-8';
    $pane->shown = FALSE;
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0c6d8275-c7bd-4d0d-9a11-69e73a17f8b6';
    $display->content['new-0c6d8275-c7bd-4d0d-9a11-69e73a17f8b6'] = $pane;
    $display->panels['middle'][1] = 'new-0c6d8275-c7bd-4d0d-9a11-69e73a17f8b6';
    $pane = new stdClass();
    $pane->pid = 'new-0d26162a-707d-4240-b8fb-ec22107d634f';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'block-9';
    $pane->shown = FALSE;
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '0d26162a-707d-4240-b8fb-ec22107d634f';
    $display->content['new-0d26162a-707d-4240-b8fb-ec22107d634f'] = $pane;
    $display->panels['middle'][2] = 'new-0d26162a-707d-4240-b8fb-ec22107d634f';
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
