<?php
/**
 * @file
 * campsite_content_types_users_importers.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function campsite_content_types_users_importers_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'import_code_sprint_nodes';
  $feeds_importer->config = array(
    'name' => 'Import Code sprint nodes',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          0 => 'public',
          1 => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'abstract',
            'target' => 'body',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'organizers',
            'target' => 'field_codesprint_organizers:label',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'experience',
            'target' => 'field_codesprint_level:label',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'resources',
            'target' => 'field_codesprint_resources',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'start date',
            'target' => 'field_codesprint_date:start',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'end date',
            'target' => 'field_codesprint_date:end',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'room',
            'target' => 'field_codesprint_room:label',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'flat',
        'skip_hash_check' => 0,
        'bundle' => 'codesprint',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['import_code_sprint_nodes'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'import_news_nodes';
  $feeds_importer->config = array(
    'name' => 'Import News nodes',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => 0,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
          'private' => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'body',
            'target' => 'body',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'link title',
            'target' => 'field_news_link:title',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'link url',
            'target' => 'field_news_link:url',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'slideshow',
            'target' => 'field_news_slideshow',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'flat',
        'skip_hash_check' => 0,
        'bundle' => 'news',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['import_news_nodes'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'import_page_nodes';
  $feeds_importer->config = array(
    'name' => 'Import Page nodes',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          0 => 'public',
          1 => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'body',
            'target' => 'body',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'flat',
        'skip_hash_check' => 0,
        'bundle' => 'page',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['import_page_nodes'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'import_session_nodes';
  $feeds_importer->config = array(
    'name' => 'Import Session nodes',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          0 => 'public',
          1 => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'abstract',
            'target' => 'body',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'speakers',
            'target' => 'field_session_speakers:label',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'experience',
            'target' => 'field_session_experience_level:label',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'track',
            'target' => 'field_session_track:label',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'keywords',
            'target' => 'field_session_keywords:label',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'room',
            'target' => 'field_session_room:label',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'date',
            'target' => 'field_session_date:start',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'type',
            'target' => 'field_session_type:label',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'resources',
            'target' => 'field_session_further_resources',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'flat',
        'skip_hash_check' => 0,
        'bundle' => 'session',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['import_session_nodes'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'import_sponsor_nodes';
  $feeds_importer->config = array(
    'name' => 'Import Sponsor nodes',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          0 => 'public',
          1 => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'body',
            'target' => 'body',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'category',
            'target' => 'field_sponsor_category:label',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'logo',
            'target' => 'field_sponsor_logo',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'link title',
            'target' => 'field_sponsor_link:title',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'link url',
            'target' => 'field_sponsor_link:url',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'flat',
        'skip_hash_check' => 0,
        'bundle' => 'sponsor',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['import_sponsor_nodes'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'import_users';
  $feeds_importer->config = array(
    'name' => 'Import users',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          0 => 'public',
          1 => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsUserProcessor',
      'config' => array(
        'roles' => array(),
        'status' => 1,
        'defuse_mail' => FALSE,
        'mappings' => array(
          0 => array(
            'source' => 'username',
            'target' => 'name',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'e-mail',
            'target' => 'mail',
            'unique' => 1,
          ),
          2 => array(
            'source' => 'password',
            'target' => 'pass',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'status',
            'target' => 'status',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'first name',
            'target' => 'field_user_first_name',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'last name',
            'target' => 'field_user_last_name',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'job title',
            'target' => 'field_user_job_title',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'organization',
            'target' => 'field_user_organization',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'about me',
            'target' => 'field_user_about_me',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'picture',
            'target' => 'field_user_picture',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 't-shirt',
            'target' => 'field_user_size_t_shirt',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'planning to attend',
            'target' => 'field_user_participate_days',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'dietary needs',
            'target' => 'field_user_dietary_needs',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'facebook',
            'target' => 'field_user_social_facebook:url',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'twitter',
            'target' => 'field_user_social_twitter:url',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'linkedin',
            'target' => 'field_user_social_linkedin:url',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'drupal',
            'target' => 'field_user_social_dorg:url',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => 0,
        'input_format' => NULL,
        'skip_hash_check' => FALSE,
        'bundle' => 'user',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['import_users'] = $feeds_importer;

  return $export;
}
