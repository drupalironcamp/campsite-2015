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
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '28a2b090-df9c-47f3-8bf9-7bc81192552e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-74b0bffe-5d3f-4b7b-87ef-42c849588a9d';
    $pane->panel = 'bottom';
    $pane->type = 'block';
    $pane->subtype = 'block-1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Sign up for updates:',
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
    $pane->uuid = '74b0bffe-5d3f-4b7b-87ef-42c849588a9d';
    $display->content['new-74b0bffe-5d3f-4b7b-87ef-42c849588a9d'] = $pane;
    $display->panels['bottom'][0] = 'new-74b0bffe-5d3f-4b7b-87ef-42c849588a9d';
    $pane = new stdClass();
    $pane->pid = 'new-727a1734-6b60-48a9-9d28-87cafaffbe27';
    $pane->panel = 'top';
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
    $pane->uuid = '727a1734-6b60-48a9-9d28-87cafaffbe27';
    $display->content['new-727a1734-6b60-48a9-9d28-87cafaffbe27'] = $pane;
    $display->panels['top'][0] = 'new-727a1734-6b60-48a9-9d28-87cafaffbe27';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-727a1734-6b60-48a9-9d28-87cafaffbe27';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['front_page'] = $page;

  return $pages;

}
