<?php
/**
 * Plugin definition for a one-column, multi-row panels layout.
 */

// Plugin definition
$plugin = array(
  'title'            => t('OneCol MultiRow'),
  'category'         => t('Columns: 1'),
  'icon'             => 'onecol_multirow.png',
  'theme'            => 'onecol_multirow',
  'css'              => 'onecol_multirow.css',
  'regions function' => 'onecol_multirow_regions',
);

/**
 * Create an unlimited number of region rows by adding one to the current number
 * of populated regions.
 */
function onecol_multirow_regions($display, $settings, $layout) {
  $regions = array();
  $maxrow  = 0;

  // Find the row id of the last panels row with content.
  foreach (array_keys($display->panels) as $key) {
    list(, $rownum) = explode('-', $key);
    $maxrow = max($maxrow, $rownum);
  }

  // Add an empty row at the bottom.
  $maxrow++;

  // Build the regions array
  for ($i = 1; $i <= $maxrow; $i++) {
    $regions["row-{$i}"] = t("Row $i");
  }

  return $regions;
}
