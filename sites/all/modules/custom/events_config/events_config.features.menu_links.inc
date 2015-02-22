<?php
/**
 * @file
 * events_config.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function events_config_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_add-event:node/add/event
  $menu_links['main-menu_add-event:node/add/event'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/event',
    'router_path' => 'node/add/event',
    'link_title' => 'Add Event',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_add-event:node/add/event',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Add Event');


  return $menu_links;
}
