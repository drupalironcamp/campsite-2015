<?php
/**
 * @file
 * campsite_pages.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function campsite_pages_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu_block-1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 1,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'iron15' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'iron15',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
