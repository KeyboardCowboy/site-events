<?php
/**
 * @file
 * events_config.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function events_config_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit__event_edit_form';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Event Edit Form',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'event_edit_form',
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
  $display->title = '';
  $display->uuid = '40be1fdf-76b9-461a-99b1-1e9e6428056b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3eaec851-a9c1-4b0b-b379-dc86af63e6b8';
    $pane->panel = 'left';
    $pane->type = 'form';
    $pane->subtype = 'form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
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
    $pane->uuid = '3eaec851-a9c1-4b0b-b379-dc86af63e6b8';
    $display->content['new-3eaec851-a9c1-4b0b-b379-dc86af63e6b8'] = $pane;
    $display->panels['left'][0] = 'new-3eaec851-a9c1-4b0b-b379-dc86af63e6b8';
    $pane = new stdClass();
    $pane->pid = 'new-5b7332a1-b244-473c-b773-440d9d7e1b5a';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'views-calendar-block_1';
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
    $pane->uuid = '5b7332a1-b244-473c-b773-440d9d7e1b5a';
    $display->content['new-5b7332a1-b244-473c-b773-440d9d7e1b5a'] = $pane;
    $display->panels['right'][0] = 'new-5b7332a1-b244-473c-b773-440d9d7e1b5a';
    $pane = new stdClass();
    $pane->pid = 'new-1fbeb21e-5394-4bca-8705-c9e45f2194b0';
    $pane->panel = 'right';
    $pane->type = 'node_form_publishing';
    $pane->subtype = 'node_form_publishing';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
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
    $pane->uuid = '1fbeb21e-5394-4bca-8705-c9e45f2194b0';
    $display->content['new-1fbeb21e-5394-4bca-8705-c9e45f2194b0'] = $pane;
    $display->panels['right'][1] = 'new-1fbeb21e-5394-4bca-8705-c9e45f2194b0';
    $pane = new stdClass();
    $pane->pid = 'new-7a827fd7-f85b-4674-b3de-e4dd85c3f312';
    $pane->panel = 'right';
    $pane->type = 'node_form_buttons';
    $pane->subtype = 'node_form_buttons';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
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
    $pane->uuid = '7a827fd7-f85b-4674-b3de-e4dd85c3f312';
    $display->content['new-7a827fd7-f85b-4674-b3de-e4dd85c3f312'] = $pane;
    $display->panels['right'][2] = 'new-7a827fd7-f85b-4674-b3de-e4dd85c3f312';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-3eaec851-a9c1-4b0b-b379-dc86af63e6b8';
  $handler->conf['display'] = $display;
  $export['node_edit__event_edit_form'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function events_config_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'events';
  $page->task = 'page';
  $page->admin_title = 'Events';
  $page->admin_description = '';
  $page->path = 'cal';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Calendar',
    'name' => 'main-menu',
    'weight' => '0',
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
  $handler->name = 'page_events__panel_context_3d7f6fb2-821e-4d17-97b0-a8aafd62b9e3';
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
    'contexts' => array(
      0 => array(
        'identifier' => 'Token',
        'keyword' => 'token',
        'name' => 'token',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '2087f9ec-ab6c-47d3-a862-26aa2d987741';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a8872994-010d-465b-aac0-2601a4e84567';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'calendar-panel_pane_1';
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
    $pane->uuid = 'a8872994-010d-465b-aac0-2601a4e84567';
    $display->content['new-a8872994-010d-465b-aac0-2601a4e84567'] = $pane;
    $display->panels['left'][0] = 'new-a8872994-010d-465b-aac0-2601a4e84567';
    $pane = new stdClass();
    $pane->pid = 'new-111a56cc-8366-4702-8281-512a236a32fd';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'calendar-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
      'arguments' => array(
        'field_date_value' => '2015-03',
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
    $pane->uuid = '111a56cc-8366-4702-8281-512a236a32fd';
    $display->content['new-111a56cc-8366-4702-8281-512a236a32fd'] = $pane;
    $display->panels['right'][0] = 'new-111a56cc-8366-4702-8281-512a236a32fd';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['events'] = $page;

  return $pages;

}
