<?php
/**
 * @file
 * campsite_core.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function campsite_core_user_default_roles() {
  $roles = array();

  // Exported role: Editor.
  $roles['Editor'] = array(
    'name' => 'Editor',
    'weight' => 3,
  );

  // Exported role: Manager.
  $roles['Manager'] = array(
    'name' => 'Manager',
    'weight' => 2,
  );

  return $roles;
}
