<?php

/**
 * Override panels default style renderer to remove panel-separator divs.
 * @param $vars
 *
 * @return string
 */
function eventstheme_panels_default_style_render_region($vars) {
  $output = '';
  $output .= implode(PHP_EOL, $vars['panes']);
  return $output;
}
