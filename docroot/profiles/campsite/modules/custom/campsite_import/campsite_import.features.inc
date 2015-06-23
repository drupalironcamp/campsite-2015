<?php
/**
 * @file
 * campsite_import.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function campsite_import_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
}
