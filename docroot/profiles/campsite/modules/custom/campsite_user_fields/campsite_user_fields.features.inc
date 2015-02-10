<?php
/**
 * @file
 * campsite_user_fields.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function campsite_user_fields_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}
