<?php
/**
 * @file
 * personalized_blog.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function personalized_blog_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: speaker.
  $roles['speaker'] = array(
    'name' => 'speaker',
    'weight' => 3,
  );

  return $roles;
}
