<?php
/**
 * @file
 * campsite_sponsor.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function campsite_sponsor_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'sponsors';
  $page->task = 'page';
  $page->admin_title = 'Sponsors';
  $page->admin_description = '';
  $page->path = 'sponsors';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_sponsors__panel_context_a617a01f-7ab3-4e44-bc59-bf18566b19ff';
  $handler->task = 'page';
  $handler->subtask = 'sponsors';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Platinum',
        'keyword' => 'Platinum',
        'name' => 'entity:taxonomy_term',
        'entity_id' => '8',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Gold',
        'keyword' => 'Gold',
        'name' => 'entity:taxonomy_term',
        'entity_id' => '9',
        'id' => 2,
      ),
      2 => array(
        'identifier' => 'Silver',
        'keyword' => 'Silver',
        'name' => 'entity:taxonomy_term',
        'entity_id' => '10',
        'id' => 3,
      ),
      3 => array(
        'identifier' => 'Code sprint sponsors',
        'keyword' => 'Code sprint sponsors',
        'name' => 'entity:taxonomy_term',
        'entity_id' => '11',
        'id' => 4,
      ),
      4 => array(
        'identifier' => 'Coffee and snacks sponsors',
        'keyword' => 'Coffee and snacks sponsors',
        'name' => 'entity:taxonomy_term',
        'entity_id' => '12',
        'id' => 5,
      ),
      5 => array(
        'identifier' => 'Lunch sponsors',
        'keyword' => 'Lunch sponsors',
        'name' => 'entity:taxonomy_term',
        'entity_id' => '13',
        'id' => 6,
      ),
      6 => array(
        'identifier' => 'Collaboration partner',
        'keyword' => 'Collaboration partner',
        'name' => 'entity:taxonomy_term',
        'entity_id' => '14',
        'id' => 7,
      ),
      7 => array(
        'identifier' => 'Social event sponsors',
        'keyword' => 'Social event sponsors',
        'name' => 'entity:taxonomy_term',
        'entity_id' => '15',
        'id' => 8,
      ),
    ),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Sponsors';
  $display->uuid = '71a93dfe-82a9-4867-bf84-fad262852014';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1a234483-5ccb-4c81-bbe7-fcb92ffbf2d7';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'sponsor-sponsor_argument_display';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'context_entity:taxonomy_term_1',
      ),
      'override_title' => 0,
      'override_title_text' => 'Platinum',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1a234483-5ccb-4c81-bbe7-fcb92ffbf2d7';
    $display->content['new-1a234483-5ccb-4c81-bbe7-fcb92ffbf2d7'] = $pane;
    $display->panels['middle'][0] = 'new-1a234483-5ccb-4c81-bbe7-fcb92ffbf2d7';
    $pane = new stdClass();
    $pane->pid = 'new-cc89a585-860f-4394-8741-5276276ce477';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'sponsor-sponsor_argument_display';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'context_entity:taxonomy_term_2',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'cc89a585-860f-4394-8741-5276276ce477';
    $display->content['new-cc89a585-860f-4394-8741-5276276ce477'] = $pane;
    $display->panels['middle'][1] = 'new-cc89a585-860f-4394-8741-5276276ce477';
    $pane = new stdClass();
    $pane->pid = 'new-6b1d0c10-33e9-40ed-8eb3-21cd89c9db4b';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'sponsor-sponsor_argument_display';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'context_entity:taxonomy_term_3',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '6b1d0c10-33e9-40ed-8eb3-21cd89c9db4b';
    $display->content['new-6b1d0c10-33e9-40ed-8eb3-21cd89c9db4b'] = $pane;
    $display->panels['middle'][2] = 'new-6b1d0c10-33e9-40ed-8eb3-21cd89c9db4b';
    $pane = new stdClass();
    $pane->pid = 'new-32e58abf-708e-4917-bdb6-bb8c7b3a0098';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'sponsor-sponsor_argument_display';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'context_entity:taxonomy_term_4',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '32e58abf-708e-4917-bdb6-bb8c7b3a0098';
    $display->content['new-32e58abf-708e-4917-bdb6-bb8c7b3a0098'] = $pane;
    $display->panels['middle'][3] = 'new-32e58abf-708e-4917-bdb6-bb8c7b3a0098';
    $pane = new stdClass();
    $pane->pid = 'new-daba1d04-9d75-4f24-9042-b1c74ce9e359';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'sponsor-sponsor_argument_display';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'context_entity:taxonomy_term_5',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'daba1d04-9d75-4f24-9042-b1c74ce9e359';
    $display->content['new-daba1d04-9d75-4f24-9042-b1c74ce9e359'] = $pane;
    $display->panels['middle'][4] = 'new-daba1d04-9d75-4f24-9042-b1c74ce9e359';
    $pane = new stdClass();
    $pane->pid = 'new-5293d883-9074-4a05-adc5-7a50a0a83121';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'sponsor-sponsor_argument_display';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'context_entity:taxonomy_term_6',
      ),
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '5293d883-9074-4a05-adc5-7a50a0a83121';
    $display->content['new-5293d883-9074-4a05-adc5-7a50a0a83121'] = $pane;
    $display->panels['middle'][5] = 'new-5293d883-9074-4a05-adc5-7a50a0a83121';
    $pane = new stdClass();
    $pane->pid = 'new-4e884fa6-377d-40f0-8312-46d831e26504';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'sponsor-sponsor_argument_display';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'context_entity:taxonomy_term_7',
      ),
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '4e884fa6-377d-40f0-8312-46d831e26504';
    $display->content['new-4e884fa6-377d-40f0-8312-46d831e26504'] = $pane;
    $display->panels['middle'][6] = 'new-4e884fa6-377d-40f0-8312-46d831e26504';
    $pane = new stdClass();
    $pane->pid = 'new-66e71ba4-02ab-418a-93dc-f708bdca7135';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'sponsor-sponsor_argument_display';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'context_entity:taxonomy_term_8',
      ),
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '66e71ba4-02ab-418a-93dc-f708bdca7135';
    $display->content['new-66e71ba4-02ab-418a-93dc-f708bdca7135'] = $pane;
    $display->panels['middle'][7] = 'new-66e71ba4-02ab-418a-93dc-f708bdca7135';
    $pane = new stdClass();
    $pane->pid = 'new-fd2c5637-509c-40a2-a565-7b7a913f6452';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'user_list-individual_sponsor';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = 'fd2c5637-509c-40a2-a565-7b7a913f6452';
    $display->content['new-fd2c5637-509c-40a2-a565-7b7a913f6452'] = $pane;
    $display->panels['middle'][8] = 'new-fd2c5637-509c-40a2-a565-7b7a913f6452';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['sponsors'] = $page;

  return $pages;

}
