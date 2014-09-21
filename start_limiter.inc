<?php

/**
 * @file
 * Definition of the 'Limiter' panel style.
 */

// Plugin definition
$plugin = array(
  'title' => t('Limiter'),
  'description' => t('Wrap the panes in a limiter div for setting a context for your grid framework'),
  'render region' => 'start_limiter_style_render_region',
);

/**
 * Render callback.
 *
 * @ingroup themeable
 */
function theme_start_limiter_style_render_region($vars) {
  $output = '';
  $output .= '<div class="limiter">';
  $output .= implode($vars['panes']);
  $output .= '</div>';
  return $output;
}
