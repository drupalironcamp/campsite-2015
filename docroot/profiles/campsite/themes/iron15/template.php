<?php

/**
 * @file
 * template.php
 */
 function iron15_menu_link(array $variables) {
   $element = $variables['element'];
   $sub_menu = '';

   if ($element['#below']) {
     // Prevent dropdown functions from being added to management menu so it
     // does not affect the navbar module.
     if (($element['#original_link']['menu_name'] == 'management') && (module_exists('navbar'))) {
       $sub_menu = drupal_render($element['#below']);
     }
     elseif ((!empty($element['#original_link']['depth'])) && ($element['#original_link']['depth'] == 1)) {
       // Add our own wrapper.
       unset($element['#below']['#theme_wrappers']);
       $sub_menu = '<ul class="dropdown-menu">' . drupal_render($element['#below']) . '</ul>';
       // Generate as standard dropdown.
       $element['#title'] .= ' <a href="#" class="toggle-arrows" data-toggle="dropdown"><span class="caret svg-caret"></span></a>';
       $element['#attributes']['class'][] = 'dropdown';
       $element['#localized_options']['html'] = TRUE;

       // Set dropdown trigger element to # to prevent inadvertant page loading
       // when a submenu link is clicked.
       //  $element['#localized_options']['attributes']['data-target'] = '#';
        $element['#localized_options']['attributes']['class'][] = 'has-toggle';
       //  $element['#localized_options']['attributes']['data-toggle'] = 'dropdown'; we do not need this
     }
   }
   // On primary navigation menu, class 'active' is not set on active menu item.
   // @see https://drupal.org/node/1896674
   if (($element['#href'] == $_GET['q'] || ($element['#href'] == '<front>' && drupal_is_front_page())) && (empty($element['#localized_options']['language']))) {
     $element['#attributes']['class'][] = 'active';
   }
   $output = l($element['#title'], $element['#href'], $element['#localized_options']);
   return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
 }


 function iron15_preprocess_page(&$variables) {
   // add different classes depending if sidebar is present
   if (!empty($variables['page']['sidebar'])) {
     $variables['content_column_class'] = ' class="col-md-6 col-md-offset-1 col-sm-8"';
   }
   else {
     $variables['content_column_class'] = ' class="col-sm-10 col-sm-offset-1"';
   }

   // Primary nav.
   $variables['primary_nav'] = FALSE;
   if ($variables['main_menu']) {
     // Build links.
     $variables['primary_nav'] = menu_tree(variable_get('menu_main_links_source', 'main-menu'));
     // Provide default theme wrapper function.
     $variables['primary_nav']['#theme_wrappers'] = array('menu_tree__primary');
   }

   // Secondary nav.
   $variables['secondary_nav'] = FALSE;
   if ($variables['secondary_menu']) {
     // Build links.
     $variables['secondary_nav'] = menu_tree(variable_get('menu_secondary_links_source', 'user-menu'));
     // Provide default theme wrapper function.
     $variables['secondary_nav']['#theme_wrappers'] = array('menu_tree__secondary');
   }

   $variables['navbar_classes_array'] = array('navbar');

   if (theme_get_setting('bootstrap_navbar_position') !== '') {
     $variables['navbar_classes_array'][] = 'navbar-' . theme_get_setting('bootstrap_navbar_position');
   }
   else {
     $variables['navbar_classes_array'][] = 'container';
   }
   if (theme_get_setting('bootstrap_navbar_inverse')) {
     $variables['navbar_classes_array'][] = 'navbar-inverse';
   }
   else {
     $variables['navbar_classes_array'][] = 'navbar-default';
   }
 }
