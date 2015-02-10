<?php
/**
 * @file
 * CampSite profile main functions.
 */

/**
 * Implements hook_install_tasks().
 */
function campsite_install_tasks(&$install_state) {
  $task = array();

  $task['campsite_import_taxonomy_terms'] = array(
    'display_name' => st('Import taxonomy terms'),
    'display' => TRUE,
    'type' => 'batch',
    'run' => INSTALL_TASK_RUN_IF_REACHED,
    'function' => 'campsite_install_task_import_taxonomy_terms',
  );

  $task['campsite_disable_modules'] = array(
    'display_name' => st('Disable modules'),
    'display' => FALSE,
    'type' => 'normal',
    'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
    'function' => 'campsite_install_task_disable_modules',
  );

  return $task;
}

/**
 * Install task callback.
 *
 * @return array
 *   Batch process definition.
 */
function campsite_install_task_import_taxonomy_terms() {
  module_enable(array('campsite_import'));

  $importer_ids = array(
    'campsite_experience_level',
    'campsite_session_type',
    'campsite_sponsor_category',
    'campsite_track',
  );

  $batch = array(
    'title' => t('Import taxonomy terms'),
    'operations' => array(),
  );

  $path = drupal_get_path('module', 'campsite_import');
  foreach ($importer_ids as $importer_id) {
    /** @var FeedsSource $source */
    $source = feeds_source($importer_id);

    $file_name = "$path/source/$importer_id.csv";

    $config = $source->config['FeedsFileFetcher'];
    $config['source'] = $file_name;
    $source->setConfigFor($source->importer->fetcher, $config);
    $source->save();

    // Copied from \FeedsSource::startBatchAPIJob().
    $batch['operations'][] = array(
      'feeds_batch',
      array('import', $importer_id, 0),
    );
  }

  return $batch;
}

/**
 * Install task callback.
 *
 * Disable unnecessary modules.
 */
function campsite_install_task_disable_modules() {
  module_disable(array('job_scheduler', 'feeds', 'campsite_import'));
}

/**
 * Implements hook_update_projects_alter().
 */
function campsite_update_projects_alter(&$projects) {
  foreach (array_keys($projects) as $project_name) {
    if (strpos($project_name, 'campsite') === 0) {
      unset($projects[$project_name]);
    }
  }
}
