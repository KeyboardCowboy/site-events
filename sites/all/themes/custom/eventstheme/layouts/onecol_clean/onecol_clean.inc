<?php

/**
 * implementation of hook_panels_layouts()
 */
// Plugin definition
$plugin = array(
  'title' => t('Single Column Clean'),
  'category' => t('Columns: 1'),
  'icon' => 'onecol_clean.png',
  'theme' => 'onecol_clean',
  'css' => 'onecol_clean.css',
  'regions' => array('middle' => t('Middle column')),
);
