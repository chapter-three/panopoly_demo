<?php
/**
 * @file
 * panopoly_demo.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function panopoly_demo_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_views_api().
 */
function panopoly_demo_views_api() {
  return array("version" => "3.0");
}
