<?php
/**
 * @file
 * campsite_codesprint.features.inc
 */

/**
 * Implements hook_node_info().
 */
function campsite_codesprint_node_info() {
  $items = array(
    'codesprint' => array(
      'name' => t('Code sprint'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
