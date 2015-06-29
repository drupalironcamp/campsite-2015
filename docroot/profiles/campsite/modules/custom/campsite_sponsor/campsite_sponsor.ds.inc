<?php
/**
 * @file
 * campsite_sponsor.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function campsite_sponsor_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|sponsor|list';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'sponsor';
  $ds_fieldsetting->view_mode = 'list';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|sponsor|list'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function campsite_sponsor_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|sponsor|list';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'sponsor';
  $ds_layout->view_mode = 'list';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_sponsor_logo',
        1 => 'field_sponsor_link',
      ),
    ),
    'fields' => array(
      'field_sponsor_logo' => 'ds_content',
      'field_sponsor_link' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|sponsor|list'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function campsite_sponsor_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'list';
  $ds_view_mode->label = 'List';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['list'] = $ds_view_mode;

  return $export;
}
