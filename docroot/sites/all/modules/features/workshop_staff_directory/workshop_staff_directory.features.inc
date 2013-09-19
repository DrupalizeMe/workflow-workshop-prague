<?php
/**
 * @file
 * workshop_staff_directory.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function workshop_staff_directory_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function workshop_staff_directory_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function workshop_staff_directory_node_info() {
  $items = array(
    'staff_member' => array(
      'name' => t('Staff Member'),
      'base' => 'node_content',
      'description' => t('Add a new staff member to the member directory.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
