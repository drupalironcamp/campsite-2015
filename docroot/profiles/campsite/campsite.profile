<?php
/**
 * @file
 * Campsite profile main functions.
 */

/**
 * Implements hook_install_tasks().
 */
function campsite_install_tasks($install_state) {
  $tasks = array(
    'campsite_language_form' => array(
      'display_name' => st('Select default language'),
      'type' => 'form',
    ),
    'campsite_set_languages' => array(
      'display_name' => st('Set up languages'),
      'type' => 'batch',
    ),
  );
  return $tasks;
}

/**
 * Returns language selection form on the profile install.
 */
function campsite_language_form($form, &$form_state) {
  $t = get_t();
  $title = $t('Select the default language');
  $form['languages'] = array(
    '#type' => 'radios',
    '#title' => $title,
    '#options' => array(
      'en' => 'English',
      'hu' => 'Hungarian',
    ),
    '#default_value' => 'en',
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => $t('Submit'),
  );

  return $form;
}

/**
 * Add language.
 */
function campsite_language_form_submit($form, &$form_state) {
  module_load_include('inc', 'locale', 'locale.admin');

  // English locale settings.
  $language_settings = array(
    'values' => array(
      'langcode' => 'en',
      'date_format_long' => 'F j, Y - H:i',
      'date_format_medium' => 'D, m/d/Y - H:i',
      'date_format_short' => 'm/d/Y - H:i',
    ),
  );
  locale_date_format_form_submit(array(), $language_settings);

  // Default locale settings.
  if ($form_state['values']['languages'] != 'en') {
    $language = _campsite_get_language_values($form_state['values']['languages']);

    locale_add_language($language['langcode'], $language['name'], $language['native'], LANGUAGE_LTR, '', '', TRUE, TRUE);

    db_update('languages')
      ->fields(array(
        'prefix' => $language['langcode'],
        'native' => $language['native'],
      ))
      ->condition('language', $language['langcode'])
      ->execute();

    locale_date_format_form_submit(array(), $language['language_settings']);
  }
}

/**
 * Sets language.
 */
function campsite_set_languages() {
  include_once DRUPAL_ROOT . '/includes/locale.inc';
  module_load_include('module', 'l10n_update');
  module_load_include('check.inc', 'l10n_update');
  module_load_include('batch.inc', 'l10n_update');

  $history = l10n_update_get_history();
  $available = l10n_update_available_releases();
  $updates = l10n_update_build_updates($history, $available);
  $updates = _l10n_update_prepare_updates($updates, NULL, array());
  $batch = l10n_update_batch_multiple($updates, LOCALE_IMPORT_KEEP);

  return $batch;
}

/**
 * Sets language values.
 */
function _campsite_get_language_values($langcode) {
  $languages = array(
    'hu' => array(
      'langcode' => 'hu',
      'name' => 'Hungarian',
      'native' => 'Magyar',
      'language_settings' => array(
        'values' => array(
          'langcode' => 'hu',
          'date_format_long' => 'Y. F d. l – H.i',
          'date_format_medium' => 'Y. M. d. – H.i',
          'date_format_short' => 'Y. m. d.',
        ),
      ),
    ),
  );

  return $languages[$langcode];
}
