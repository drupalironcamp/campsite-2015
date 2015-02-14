<?php
/**
 * @file
 * campsite_codesprint.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function campsite_codesprint_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'codesprint_listing';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Codesprint listing';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Sprints';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_codesprint_organizers' => 'field_codesprint_organizers',
    'field_codesprint_date' => 'field_codesprint_date',
    'body' => 'body',
    'field_codesprint_level' => 'field_codesprint_level',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_codesprint_organizers' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_codesprint_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
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
    'field_codesprint_level' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No result found.';
  $handler->display->display_options['empty']['area']['format'] = 'wysiwyg';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Organizers */
  $handler->display->display_options['fields']['field_codesprint_organizers']['id'] = 'field_codesprint_organizers';
  $handler->display->display_options['fields']['field_codesprint_organizers']['table'] = 'field_data_field_codesprint_organizers';
  $handler->display->display_options['fields']['field_codesprint_organizers']['field'] = 'field_codesprint_organizers';
  $handler->display->display_options['fields']['field_codesprint_organizers']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_codesprint_organizers']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_codesprint_organizers']['delta_offset'] = '0';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_codesprint_date']['id'] = 'field_codesprint_date';
  $handler->display->display_options['fields']['field_codesprint_date']['table'] = 'field_data_field_codesprint_date';
  $handler->display->display_options['fields']['field_codesprint_date']['field'] = 'field_codesprint_date';
  $handler->display->display_options['fields']['field_codesprint_date']['label'] = 'Proposed Dates';
  $handler->display->display_options['fields']['field_codesprint_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_codesprint_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_codesprint_date']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Abstract';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  /* Field: Content: Experience level */
  $handler->display->display_options['fields']['field_codesprint_level']['id'] = 'field_codesprint_level';
  $handler->display->display_options['fields']['field_codesprint_level']['table'] = 'field_data_field_codesprint_level';
  $handler->display->display_options['fields']['field_codesprint_level']['field'] = 'field_codesprint_level';
  $handler->display->display_options['fields']['field_codesprint_level']['label'] = 'Experience';
  $handler->display->display_options['fields']['field_codesprint_level']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_codesprint_level']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'codesprint' => 'codesprint',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Body (body) */
  $handler->display->display_options['filters']['body_value']['id'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['table'] = 'field_data_body';
  $handler->display->display_options['filters']['body_value']['field'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['operator'] = 'word';
  $handler->display->display_options['filters']['body_value']['group'] = 1;
  $handler->display->display_options['filters']['body_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['body_value']['expose']['operator_id'] = 'body_value_op';
  $handler->display->display_options['filters']['body_value']['expose']['label'] = 'Keyword';
  $handler->display->display_options['filters']['body_value']['expose']['operator'] = 'body_value_op';
  $handler->display->display_options['filters']['body_value']['expose']['identifier'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['body_value']['group_info']['label'] = 'Abstract (body)';
  $handler->display->display_options['filters']['body_value']['group_info']['identifier'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['body_value']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  /* Filter criterion: Content: Experience level (field_codesprint_level) */
  $handler->display->display_options['filters']['field_codesprint_level_target_id']['id'] = 'field_codesprint_level_target_id';
  $handler->display->display_options['filters']['field_codesprint_level_target_id']['table'] = 'field_data_field_codesprint_level';
  $handler->display->display_options['filters']['field_codesprint_level_target_id']['field'] = 'field_codesprint_level_target_id';
  $handler->display->display_options['filters']['field_codesprint_level_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_codesprint_level_target_id']['expose']['operator_id'] = 'field_codesprint_level_target_id_op';
  $handler->display->display_options['filters']['field_codesprint_level_target_id']['expose']['label'] = 'Experience level';
  $handler->display->display_options['filters']['field_codesprint_level_target_id']['expose']['operator'] = 'field_codesprint_level_target_id_op';
  $handler->display->display_options['filters']['field_codesprint_level_target_id']['expose']['identifier'] = 'field_codesprint_level_target_id';
  $handler->display->display_options['filters']['field_codesprint_level_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );

  /* Display: Code sprints page */
  $handler = $view->new_display('page', 'Code sprints page', 'page_1');
  $handler->display->display_options['path'] = 'program/code-sprints';
  $export['codesprint_listing'] = $view;

  return $export;
}
