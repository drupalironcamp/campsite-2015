<?php
/**
 * @file
 * campsite_custom_blocks.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function campsite_custom_blocks_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-mailchimp_signup'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'mailchimp_signup',
    'module' => 'block',
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
    'title' => 'Sign up for updates:',
    'visibility' => 0,
  );

  $export['block-map_venue_location'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'map_venue_location',
    'module' => 'block',
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
    'title' => '',
    'visibility' => 0,
  );

  $export['block-twitter'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'twitter',
    'module' => 'block',
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
    'title' => 'Twitter',
    'visibility' => 0,
  );

  return $export;
}
