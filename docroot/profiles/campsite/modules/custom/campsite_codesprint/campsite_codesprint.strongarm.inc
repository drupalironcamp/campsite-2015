<?php
/**
 * @file
 * campsite_codesprint.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function campsite_codesprint_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_codesprint';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_codesprint'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_codesprint';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_codesprint'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_codesprint';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_codesprint'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_codesprint';
  $strongarm->value = '1';
  $export['node_preview_codesprint'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_codesprint';
  $strongarm->value = 0;
  $export['node_submitted_codesprint'] = $strongarm;

  return $export;
}
