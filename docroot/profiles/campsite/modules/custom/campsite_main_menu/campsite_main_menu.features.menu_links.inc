<?php
/**
 * @file
 * campsite_main_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function campsite_main_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_about-iron-camp:node/1
  $menu_links['main-menu_about-iron-camp:node/1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'About Iron Camp',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_about-iron-camp:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_accomodation:node/9
  $menu_links['main-menu_accomodation:node/9'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/9',
    'router_path' => 'node/%',
    'link_title' => 'Accomodation',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_accomodation:node/9',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_budapest:node/7',
  );
  // Exported menu link: main-menu_attendees:community/attendees
  $menu_links['main-menu_attendees:community/attendees'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'community/attendees',
    'router_path' => 'community/%',
    'link_title' => 'Attendees',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_attendees:community/attendees',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_community:community/attendees',
  );
  // Exported menu link: main-menu_bof:node/4
  $menu_links['main-menu_bof:node/4'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/4',
    'router_path' => 'node/%',
    'link_title' => 'BoF',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_bof:node/4',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_program:node/2',
  );
  // Exported menu link: main-menu_budapest:node/7
  $menu_links['main-menu_budapest:node/7'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/7',
    'router_path' => 'node/%',
    'link_title' => 'Budapest',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_budapest:node/7',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_code-of-conduct:node/16
  $menu_links['main-menu_code-of-conduct:node/16'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/16',
    'router_path' => 'node/%',
    'link_title' => 'Code of conduct',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_code-of-conduct:node/16',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_community:community/attendees',
  );
  // Exported menu link: main-menu_community:community/attendees
  $menu_links['main-menu_community:community/attendees'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'community/attendees',
    'router_path' => 'community/%',
    'link_title' => 'Community',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_community:community/attendees',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: main-menu_going-out:node/11
  $menu_links['main-menu_going-out:node/11'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/11',
    'router_path' => 'node/%',
    'link_title' => 'Going out',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_going-out:node/11',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_budapest:node/7',
  );
  // Exported menu link: main-menu_home:<front>
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_job-speed-dating:node/3
  $menu_links['main-menu_job-speed-dating:node/3'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/3',
    'router_path' => 'node/%',
    'link_title' => 'Job speed dating',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_job-speed-dating:node/3',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_program:node/2',
  );
  // Exported menu link: main-menu_location:node/7
  $menu_links['main-menu_location:node/7'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/7',
    'router_path' => 'node/%',
    'link_title' => 'Location',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_location:node/7',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_budapest:node/7',
  );
  // Exported menu link: main-menu_our-sponsors:sponsors
  $menu_links['main-menu_our-sponsors:sponsors'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'sponsors',
    'router_path' => 'sponsors',
    'link_title' => 'Our sponsors',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_our-sponsors:sponsors',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_sponsors:sponsors',
  );
  // Exported menu link: main-menu_program:node/2
  $menu_links['main-menu_program:node/2'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'Program',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_program:node/2',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_scholarship:node/14
  $menu_links['main-menu_scholarship:node/14'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/14',
    'router_path' => 'node/%',
    'link_title' => 'Scholarship',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_scholarship:node/14',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_community:community/attendees',
  );
  // Exported menu link: main-menu_sessions:program/sessions
  $menu_links['main-menu_sessions:program/sessions'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'program/sessions',
    'router_path' => 'program/sessions',
    'link_title' => 'Sessions',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_sessions:program/sessions',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_program:node/2',
  );
  // Exported menu link: main-menu_social-activities:node/5
  $menu_links['main-menu_social-activities:node/5'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/5',
    'router_path' => 'node/%',
    'link_title' => 'Social activities',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_social-activities:node/5',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'main-menu_program:node/2',
  );
  // Exported menu link: main-menu_sponsor-guide:node/13
  $menu_links['main-menu_sponsor-guide:node/13'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/13',
    'router_path' => 'node/%',
    'link_title' => 'Sponsor guide',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_sponsor-guide:node/13',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_sponsors:sponsors',
  );
  // Exported menu link: main-menu_sponsors:sponsors
  $menu_links['main-menu_sponsors:sponsors'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'sponsors',
    'router_path' => 'sponsors',
    'link_title' => 'Sponsors',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_sponsors:sponsors',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_spread-the-word:node/15
  $menu_links['main-menu_spread-the-word:node/15'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/15',
    'router_path' => 'node/%',
    'link_title' => 'Spread the word',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_spread-the-word:node/15',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_community:community/attendees',
  );
  // Exported menu link: main-menu_sprints:program/code-sprints
  $menu_links['main-menu_sprints:program/code-sprints'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'program/code-sprints',
    'router_path' => 'program/code-sprints',
    'link_title' => 'Sprints',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_sprints:program/code-sprints',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_program:node/2',
  );
  // Exported menu link: main-menu_timeline:node/2
  $menu_links['main-menu_timeline:node/2'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'Timeline',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_timeline:node/2',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_program:node/2',
  );
  // Exported menu link: main-menu_travel:node/10
  $menu_links['main-menu_travel:node/10'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/10',
    'router_path' => 'node/%',
    'link_title' => 'Travel',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_travel:node/10',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_budapest:node/7',
  );
  // Exported menu link: main-menu_useful-tips:node/12
  $menu_links['main-menu_useful-tips:node/12'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/12',
    'router_path' => 'node/%',
    'link_title' => 'Useful tips',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_useful-tips:node/12',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'main-menu_budapest:node/7',
  );
  // Exported menu link: main-menu_venue:node/8
  $menu_links['main-menu_venue:node/8'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/8',
    'router_path' => 'node/%',
    'link_title' => 'Venue',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_venue:node/8',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_budapest:node/7',
  );
  // Exported menu link: main-menu_volunteers:community/volunteers
  $menu_links['main-menu_volunteers:community/volunteers'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'community/volunteers',
    'router_path' => 'community/%',
    'link_title' => 'Volunteers',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_volunteers:community/volunteers',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_community:community/attendees',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About Iron Camp');
  t('Accomodation');
  t('Attendees');
  t('BoF');
  t('Budapest');
  t('Code of conduct');
  t('Community');
  t('Going out');
  t('Home');
  t('Job speed dating');
  t('Location');
  t('Our sponsors');
  t('Program');
  t('Scholarship');
  t('Sessions');
  t('Social activities');
  t('Sponsor guide');
  t('Sponsors');
  t('Spread the word');
  t('Sprints');
  t('Timeline');
  t('Travel');
  t('Useful tips');
  t('Venue');
  t('Volunteers');


  return $menu_links;
}
