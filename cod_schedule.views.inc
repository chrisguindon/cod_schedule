<?php
/**
 * @file
 * Views hooks for cod_schedule feature
 */

/**
 * Implements hook_views_plugins().
 */
function cod_schedule_views_plugins() {
  return array(
    'module' => 'cod_schedule',
    'style' => array(
      'cod_schedule_grid' => array(
        'title' => t('COD Grid Schedule'),
        'help' => t('Display view as a table with room columns and time slot rows'),
        'handler' => 'CodScheduleViewsPluginStyleSchedule',
        'theme' => 'cod_schedule_grid',
        'uses row plugin' => FALSE,
        'uses row class' => FALSE,
        'uses fields' => TRUE,
        'uses options' => TRUE,
        'uses grouping' => FALSE,
        'use ajax' => FALSE,
        'type' => 'normal',
        'even empty' => TRUE,
      ),
    ),
  );
}