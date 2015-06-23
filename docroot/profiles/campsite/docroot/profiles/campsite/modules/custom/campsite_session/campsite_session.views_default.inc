<?php
/**
 * @file
 * campsite_session.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function campsite_session_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'session_listings';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Session listings';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Sessions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '80';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_session_speakers' => 'field_session_speakers',
    'body' => 'body',
    'field_session_date' => 'field_session_date',
    'field_session_experience_level' => 'field_session_experience_level',
    'field_session_track' => 'field_session_track',
    'field_session_type' => 'field_session_type',
    'ops' => 'ops',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_session_speakers' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_session_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_session_experience_level' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_session_track' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_session_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'ops' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Flags: vote_for_session */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'vote_for_session';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_session_speakers_target_id']['id'] = 'field_session_speakers_target_id';
  $handler->display->display_options['relationships']['field_session_speakers_target_id']['table'] = 'field_data_field_session_speakers';
  $handler->display->display_options['relationships']['field_session_speakers_target_id']['field'] = 'field_session_speakers_target_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Speakers */
  $handler->display->display_options['fields']['field_session_speakers']['id'] = 'field_session_speakers';
  $handler->display->display_options['fields']['field_session_speakers']['table'] = 'field_data_field_session_speakers';
  $handler->display->display_options['fields']['field_session_speakers']['field'] = 'field_session_speakers';
  $handler->display->display_options['fields']['field_session_speakers']['label'] = 'Speaker(s)';
  $handler->display->display_options['fields']['field_session_speakers']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_session_speakers']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Abstract';
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_session_type']['id'] = 'field_session_type';
  $handler->display->display_options['fields']['field_session_type']['table'] = 'field_data_field_session_type';
  $handler->display->display_options['fields']['field_session_type']['field'] = 'field_session_type';
  $handler->display->display_options['fields']['field_session_type']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Experience level */
  $handler->display->display_options['fields']['field_session_experience_level']['id'] = 'field_session_experience_level';
  $handler->display->display_options['fields']['field_session_experience_level']['table'] = 'field_data_field_session_experience_level';
  $handler->display->display_options['fields']['field_session_experience_level']['field'] = 'field_session_experience_level';
  $handler->display->display_options['fields']['field_session_experience_level']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Track */
  $handler->display->display_options['fields']['field_session_track']['id'] = 'field_session_track';
  $handler->display->display_options['fields']['field_session_track']['table'] = 'field_data_field_session_track';
  $handler->display->display_options['fields']['field_session_track']['field'] = 'field_session_track';
  $handler->display->display_options['fields']['field_session_track']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_session_date']['id'] = 'field_session_date';
  $handler->display->display_options['fields']['field_session_date']['table'] = 'field_data_field_session_date';
  $handler->display->display_options['fields']['field_session_date']['field'] = 'field_session_date';
  $handler->display->display_options['fields']['field_session_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = 'Vote';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'session' => 'session',
  );
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'field_session_speakers_target_id';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Speaker';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Type (field_session_type) */
  $handler->display->display_options['filters']['field_session_type_target_id']['id'] = 'field_session_type_target_id';
  $handler->display->display_options['filters']['field_session_type_target_id']['table'] = 'field_data_field_session_type';
  $handler->display->display_options['filters']['field_session_type_target_id']['field'] = 'field_session_type_target_id';
  $handler->display->display_options['filters']['field_session_type_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_session_type_target_id']['expose']['operator_id'] = 'field_session_type_target_id_op';
  $handler->display->display_options['filters']['field_session_type_target_id']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_session_type_target_id']['expose']['operator'] = 'field_session_type_target_id_op';
  $handler->display->display_options['filters']['field_session_type_target_id']['expose']['identifier'] = 'field_session_type_target_id';
  $handler->display->display_options['filters']['field_session_type_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Experience level (field_session_experience_level) */
  $handler->display->display_options['filters']['field_session_experience_level_target_id']['id'] = 'field_session_experience_level_target_id';
  $handler->display->display_options['filters']['field_session_experience_level_target_id']['table'] = 'field_data_field_session_experience_level';
  $handler->display->display_options['filters']['field_session_experience_level_target_id']['field'] = 'field_session_experience_level_target_id';
  $handler->display->display_options['filters']['field_session_experience_level_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_session_experience_level_target_id']['expose']['operator_id'] = 'field_session_experience_level_target_id_op';
  $handler->display->display_options['filters']['field_session_experience_level_target_id']['expose']['label'] = 'Experience level';
  $handler->display->display_options['filters']['field_session_experience_level_target_id']['expose']['operator'] = 'field_session_experience_level_target_id_op';
  $handler->display->display_options['filters']['field_session_experience_level_target_id']['expose']['identifier'] = 'field_session_experience_level_target_id';
  $handler->display->display_options['filters']['field_session_experience_level_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Track (field_session_track) */
  $handler->display->display_options['filters']['field_session_track_target_id']['id'] = 'field_session_track_target_id';
  $handler->display->display_options['filters']['field_session_track_target_id']['table'] = 'field_data_field_session_track';
  $handler->display->display_options['filters']['field_session_track_target_id']['field'] = 'field_session_track_target_id';
  $handler->display->display_options['filters']['field_session_track_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_session_track_target_id']['expose']['operator_id'] = 'field_session_track_target_id_op';
  $handler->display->display_options['filters']['field_session_track_target_id']['expose']['label'] = 'Track';
  $handler->display->display_options['filters']['field_session_track_target_id']['expose']['operator'] = 'field_session_track_target_id_op';
  $handler->display->display_options['filters']['field_session_track_target_id']['expose']['identifier'] = 'field_session_track_target_id';
  $handler->display->display_options['filters']['field_session_track_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Body (body) */
  $handler->display->display_options['filters']['body_value']['id'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['table'] = 'field_data_body';
  $handler->display->display_options['filters']['body_value']['field'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['operator'] = 'allwords';
  $handler->display->display_options['filters']['body_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['body_value']['expose']['operator_id'] = 'body_value_op';
  $handler->display->display_options['filters']['body_value']['expose']['label'] = 'Keyword';
  $handler->display->display_options['filters']['body_value']['expose']['operator'] = 'body_value_op';
  $handler->display->display_options['filters']['body_value']['expose']['identifier'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['path'] = 'program/sessions';

  /* Display: Admin */
  $handler = $view->new_display('page', 'Admin', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_session_speakers' => 'field_session_speakers',
    'body' => 'body',
    'field_session_type' => 'field_session_type',
    'field_session_experience_level' => 'field_session_experience_level',
    'field_session_track' => 'field_session_track',
    'field_session_date' => 'field_session_date',
    'ops' => 'ops',
    'count' => 'count',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_session_speakers' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_session_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_session_experience_level' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_session_track' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_session_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'ops' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'count' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_session_speakers_target_id']['id'] = 'field_session_speakers_target_id';
  $handler->display->display_options['relationships']['field_session_speakers_target_id']['table'] = 'field_data_field_session_speakers';
  $handler->display->display_options['relationships']['field_session_speakers_target_id']['field'] = 'field_session_speakers_target_id';
  /* Relationship: Flags: vote_for_session counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'vote_for_session';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Speakers */
  $handler->display->display_options['fields']['field_session_speakers']['id'] = 'field_session_speakers';
  $handler->display->display_options['fields']['field_session_speakers']['table'] = 'field_data_field_session_speakers';
  $handler->display->display_options['fields']['field_session_speakers']['field'] = 'field_session_speakers';
  $handler->display->display_options['fields']['field_session_speakers']['label'] = 'Speaker(s)';
  $handler->display->display_options['fields']['field_session_speakers']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_session_speakers']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Abstract';
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_session_type']['id'] = 'field_session_type';
  $handler->display->display_options['fields']['field_session_type']['table'] = 'field_data_field_session_type';
  $handler->display->display_options['fields']['field_session_type']['field'] = 'field_session_type';
  $handler->display->display_options['fields']['field_session_type']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Experience level */
  $handler->display->display_options['fields']['field_session_experience_level']['id'] = 'field_session_experience_level';
  $handler->display->display_options['fields']['field_session_experience_level']['table'] = 'field_data_field_session_experience_level';
  $handler->display->display_options['fields']['field_session_experience_level']['field'] = 'field_session_experience_level';
  $handler->display->display_options['fields']['field_session_experience_level']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Track */
  $handler->display->display_options['fields']['field_session_track']['id'] = 'field_session_track';
  $handler->display->display_options['fields']['field_session_track']['table'] = 'field_data_field_session_track';
  $handler->display->display_options['fields']['field_session_track']['field'] = 'field_session_track';
  $handler->display->display_options['fields']['field_session_track']['settings'] = array(
    'link' => 1,
  );
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['label'] = 'Votes';
  $handler->display->display_options['path'] = 'admin/content/sessions';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Sessions';
  $handler->display->display_options['menu']['description'] = 'Sessions';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['session_listings'] = $view;

  return $export;
}
