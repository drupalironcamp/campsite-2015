<?php
/**
 * @file
 * campsite_export_user_datas.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function campsite_export_user_datas_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'user_export';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'User export';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer users';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: User: First name */
  $handler->display->display_options['fields']['field_user_first_name']['id'] = 'field_user_first_name';
  $handler->display->display_options['fields']['field_user_first_name']['table'] = 'field_data_field_user_first_name';
  $handler->display->display_options['fields']['field_user_first_name']['field'] = 'field_user_first_name';
  /* Field: User: Last name */
  $handler->display->display_options['fields']['field_user_last_name_1']['id'] = 'field_user_last_name_1';
  $handler->display->display_options['fields']['field_user_last_name_1']['table'] = 'field_data_field_user_last_name';
  $handler->display->display_options['fields']['field_user_last_name_1']['field'] = 'field_user_last_name';
  /* Field: User: Country */
  $handler->display->display_options['fields']['field_user_country']['id'] = 'field_user_country';
  $handler->display->display_options['fields']['field_user_country']['table'] = 'field_data_field_user_country';
  $handler->display->display_options['fields']['field_user_country']['field'] = 'field_user_country';
  /* Field: User: Job title */
  $handler->display->display_options['fields']['field_user_job_title']['id'] = 'field_user_job_title';
  $handler->display->display_options['fields']['field_user_job_title']['table'] = 'field_data_field_user_job_title';
  $handler->display->display_options['fields']['field_user_job_title']['field'] = 'field_user_job_title';
  /* Field: User: Organization */
  $handler->display->display_options['fields']['field_user_organization']['id'] = 'field_user_organization';
  $handler->display->display_options['fields']['field_user_organization']['table'] = 'field_data_field_user_organization';
  $handler->display->display_options['fields']['field_user_organization']['field'] = 'field_user_organization';
  /* Field: User: My T-shirt size */
  $handler->display->display_options['fields']['field_user_size_t_shirt']['id'] = 'field_user_size_t_shirt';
  $handler->display->display_options['fields']['field_user_size_t_shirt']['table'] = 'field_data_field_user_size_t_shirt';
  $handler->display->display_options['fields']['field_user_size_t_shirt']['field'] = 'field_user_size_t_shirt';
  /* Field: User: Dietary needs */
  $handler->display->display_options['fields']['field_user_dietary_needs']['id'] = 'field_user_dietary_needs';
  $handler->display->display_options['fields']['field_user_dietary_needs']['table'] = 'field_data_field_user_dietary_needs';
  $handler->display->display_options['fields']['field_user_dietary_needs']['field'] = 'field_user_dietary_needs';
  $handler->display->display_options['fields']['field_user_dietary_needs']['delta_offset'] = '0';
  /* Field: User: I&#039;m planning to attend the following days (field_user_participate_days:delta) */
  $handler->display->display_options['fields']['delta']['id'] = 'delta';
  $handler->display->display_options['fields']['delta']['table'] = 'field_data_field_user_participate_days';
  $handler->display->display_options['fields']['delta']['field'] = 'delta';
  /* Field: User: I'm interested in participating at the job speed dating */
  $handler->display->display_options['fields']['field_user_job_speeding_date']['id'] = 'field_user_job_speeding_date';
  $handler->display->display_options['fields']['field_user_job_speeding_date']['table'] = 'field_data_field_user_job_speeding_date';
  $handler->display->display_options['fields']['field_user_job_speeding_date']['field'] = 'field_user_job_speeding_date';
  /* Field: User: I'm planning to attend the following days */
  $handler->display->display_options['fields']['field_user_participate_days']['id'] = 'field_user_participate_days';
  $handler->display->display_options['fields']['field_user_participate_days']['table'] = 'field_data_field_user_participate_days';
  $handler->display->display_options['fields']['field_user_participate_days']['field'] = 'field_user_participate_days';
  $handler->display->display_options['fields']['field_user_participate_days']['delta_offset'] = '0';
  /* Sort criterion: User: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'users';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: The user ID */
  $handler->display->display_options['filters']['uid_raw']['id'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['operator'] = '!=';
  $handler->display->display_options['filters']['uid_raw']['value']['value'] = '1';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['path'] = 'admin/people/export';
  $export['user_export'] = $view;

  return $export;
}
