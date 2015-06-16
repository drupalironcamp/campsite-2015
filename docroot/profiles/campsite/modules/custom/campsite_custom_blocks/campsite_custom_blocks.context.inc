<?php
/**
 * @file
 * campsite_custom_blocks.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function campsite_custom_blocks_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'inner_pages';
  $context->description = 'Inner pages';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'codesprint' => 'codesprint',
        'news' => 'news',
        'page' => 'page',
        'session' => 'session',
        'sponsor' => 'sponsor',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'sharethis-sharethis_block' => array(
          'module' => 'sharethis',
          'delta' => 'sharethis_block',
          'region' => 'content',
          'weight' => '10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Inner pages');
  $export['inner_pages'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sharethis';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'codesprint' => 'codesprint',
        'news' => 'news',
        'page' => 'page',
        'session' => 'session',
        'sponsor' => 'sponsor',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'sharethis-sharethis_block' => array(
          'module' => 'sharethis',
          'delta' => 'sharethis_block',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['sharethis'] = $context;

  return $export;
}
