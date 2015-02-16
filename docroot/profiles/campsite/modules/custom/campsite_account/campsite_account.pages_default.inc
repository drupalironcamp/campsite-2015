<?php
/**
 * @file
 * campsite_account.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function campsite_account_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'user_list_attendees';
  $page->task = 'page';
  $page->admin_title = 'Attendees';
  $page->admin_description = '';
  $page->path = 'community/%user_list';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'user_list' => array(
      'id' => 1,
      'identifier' => 'user_list',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_user_list_attendees__panel_context_e4f550de-a314-48eb-b086-a9f2ab6473d4';
  $handler->task = 'page';
  $handler->subtask = 'user_list_attendees';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Attendees',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'string_equal',
          'settings' => array(
            'operator' => '=',
            'value' => 'attendees',
            'case' => 0,
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
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
  $display->title = 'Attendees';
  $display->uuid = '4bdcd68c-7325-4adf-9812-9b71c45dfb4f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-caf4f663-d6b7-495e-b96f-45b9965a76cb';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'user_list-attendee_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'caf4f663-d6b7-495e-b96f-45b9965a76cb';
    $display->content['new-caf4f663-d6b7-495e-b96f-45b9965a76cb'] = $pane;
    $display->panels['middle'][0] = 'new-caf4f663-d6b7-495e-b96f-45b9965a76cb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-caf4f663-d6b7-495e-b96f-45b9965a76cb';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_user_list_attendees__panel_context_add8351c-6ba7-4a81-9ca4-cd7c4162c121';
  $handler->task = 'page';
  $handler->subtask = 'user_list_attendees';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Individual sponsors',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'string_equal',
          'settings' => array(
            'operator' => '=',
            'value' => 'individual-sponsor',
            'case' => 0,
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
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
  $display->title = 'Individual sponsors';
  $display->uuid = '4bdcd68c-7325-4adf-9812-9b71c45dfb4f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5df42369-192b-48fc-adc3-e58396bb1990';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5df42369-192b-48fc-adc3-e58396bb1990';
    $display->content['new-5df42369-192b-48fc-adc3-e58396bb1990'] = $pane;
    $display->panels['middle'][0] = 'new-5df42369-192b-48fc-adc3-e58396bb1990';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_user_list_attendees__panel_context_d7b8e153-ef64-4b9a-a616-518af1cb1a02';
  $handler->task = 'page';
  $handler->subtask = 'user_list_attendees';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'Featured attendees',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'string_equal',
          'settings' => array(
            'operator' => '=',
            'value' => 'featured-attendees',
            'case' => 0,
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
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
  $display->title = 'Featured attendees';
  $display->uuid = '4bdcd68c-7325-4adf-9812-9b71c45dfb4f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7a9eedb5-df39-405c-8aba-74c2b2492161';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'user_list-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7a9eedb5-df39-405c-8aba-74c2b2492161';
    $display->content['new-7a9eedb5-df39-405c-8aba-74c2b2492161'] = $pane;
    $display->panels['middle'][0] = 'new-7a9eedb5-df39-405c-8aba-74c2b2492161';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_user_list_attendees__panel_context_c4271588-9e1b-43bd-bf68-e095b00e7e18';
  $handler->task = 'page';
  $handler->subtask = 'user_list_attendees';
  $handler->handler = 'panel_context';
  $handler->weight = -27;
  $handler->conf = array(
    'title' => 'Volunteer',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'string_equal',
          'settings' => array(
            'operator' => '=',
            'value' => 'volunteers',
            'case' => 0,
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
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
  $display->title = 'Volunteers';
  $display->uuid = '4bdcd68c-7325-4adf-9812-9b71c45dfb4f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-351e62dc-4789-4e16-aa6c-f19493ff812a';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'user_list-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '351e62dc-4789-4e16-aa6c-f19493ff812a';
    $display->content['new-351e62dc-4789-4e16-aa6c-f19493ff812a'] = $pane;
    $display->panels['middle'][0] = 'new-351e62dc-4789-4e16-aa6c-f19493ff812a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['user_list_attendees'] = $page;

  return $pages;

}
