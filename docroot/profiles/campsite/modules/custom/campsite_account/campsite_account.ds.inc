<?php
/**
 * @file
 * campsite_account.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function campsite_account_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'attendee';
  $ds_view_mode->label = 'Attendee';
  $ds_view_mode->entities = array(
    'user' => 'user',
  );
  $export['attendee'] = $ds_view_mode;

  return $export;
}
