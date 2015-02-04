<?php
/**
 * @file
 * roles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function roles_user_default_roles() {
  $roles = array();

  // Exported role: Attendee.
  $roles['Attendee'] = array(
    'name' => 'Attendee',
    'weight' => 2,
  );

  // Exported role: Editor.
  $roles['Editor'] = array(
    'name' => 'Editor',
    'weight' => 3,
  );

  // Exported role: Manager admin.
  $roles['Manager admin'] = array(
    'name' => 'Manager admin',
    'weight' => 4,
  );

  return $roles;
}
