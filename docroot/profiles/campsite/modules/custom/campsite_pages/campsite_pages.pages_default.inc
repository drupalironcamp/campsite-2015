<?php
/**
 * @file
 * campsite_pages.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function campsite_pages_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'front_page';
  $page->task = 'page';
  $page->admin_title = 'Front page';
  $page->admin_description = 'Front page';
  $page->path = 'home';
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
  $handler->name = 'page_front_page__panel_context_db2a734c-dd72-4042-a1fc-02050ad4a523';
  $handler->task = 'page';
  $handler->subtask = 'front_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '28a2b090-df9c-47f3-8bf9-7bc81192552e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3382765b-0b4f-4d77-ba79-5e74182aae1e';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'news-panel_pane_2';
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
    $pane->uuid = '3382765b-0b4f-4d77-ba79-5e74182aae1e';
    $display->content['new-3382765b-0b4f-4d77-ba79-5e74182aae1e'] = $pane;
    $display->panels['middle'][0] = 'new-3382765b-0b4f-4d77-ba79-5e74182aae1e';
    $pane = new stdClass();
    $pane->pid = 'new-1ff4b115-e8f3-4479-891d-1c4a2f81fb95';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '1ff4b115-e8f3-4479-891d-1c4a2f81fb95';
    $display->content['new-1ff4b115-e8f3-4479-891d-1c4a2f81fb95'] = $pane;
    $display->panels['middle'][1] = 'new-1ff4b115-e8f3-4479-891d-1c4a2f81fb95';
    $pane = new stdClass();
    $pane->pid = 'new-abb862dd-b419-4579-aa1d-728697313f30';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'news-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'abb862dd-b419-4579-aa1d-728697313f30';
    $display->content['new-abb862dd-b419-4579-aa1d-728697313f30'] = $pane;
    $display->panels['middle'][2] = 'new-abb862dd-b419-4579-aa1d-728697313f30';
    $pane = new stdClass();
    $pane->pid = 'new-9593ff69-a59a-40e8-a4a4-f651d253534d';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'sponsor-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '9593ff69-a59a-40e8-a4a4-f651d253534d';
    $display->content['new-9593ff69-a59a-40e8-a4a4-f651d253534d'] = $pane;
    $display->panels['middle'][3] = 'new-9593ff69-a59a-40e8-a4a4-f651d253534d';
    $pane = new stdClass();
    $pane->pid = 'new-00bcd635-5eaa-41c3-9ae8-b8912b8515dc';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'sponsor-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '00bcd635-5eaa-41c3-9ae8-b8912b8515dc';
    $display->content['new-00bcd635-5eaa-41c3-9ae8-b8912b8515dc'] = $pane;
    $display->panels['middle'][4] = 'new-00bcd635-5eaa-41c3-9ae8-b8912b8515dc';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['front_page'] = $page;

  return $pages;

}
