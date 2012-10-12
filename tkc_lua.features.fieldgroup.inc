<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function tkc_lua_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_lua_clearance
  $groups['landuseauthorization-group_lua_clearance'] = array(
    'group_type' => 'multigroup',
    'type_name' => 'landuseauthorization',
    'group_name' => 'group_lua_clearance',
    'label' => 'Letter of Clearance',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'teaser' => array(
          'format' => 'fieldset',
        ),
        'full' => array(
          'format' => 'fieldset',
        ),
        '4' => array(
          'format' => 'fieldset',
        ),
        '2' => array(
          'format' => 'fieldset',
        ),
        '3' => array(
          'format' => 'fieldset',
        ),
        '5' => array(
          'format' => 'fieldset',
        ),
        'token' => array(
          'format' => 'fieldset',
        ),
        'description' => NULL,
      ),
      'multigroup' => array(
        'multiple' => 1,
      ),
    ),
    'weight' => '56',
    'parent' => '',
    'fields' => array(),
    'depth' => 0,
    'parents' => array(
      '0' => '',
    ),
  );

  // Exported group: group_lua_condition
  $groups['landuseauthorization-group_lua_condition'] = array(
    'group_type' => 'multigroup',
    'type_name' => 'landuseauthorization',
    'group_name' => 'group_lua_condition',
    'label' => 'Condition',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'teaser' => array(
          'format' => 'fieldset',
        ),
        'full' => array(
          'format' => 'fieldset',
        ),
        '4' => array(
          'format' => 'fieldset',
        ),
        '2' => array(
          'format' => 'fieldset',
        ),
        '3' => array(
          'format' => 'fieldset',
        ),
        '5' => array(
          'format' => 'fieldset',
        ),
        'token' => array(
          'format' => 'fieldset',
        ),
        'description' => NULL,
      ),
      'multigroup' => array(
        'multiple' => 1,
      ),
    ),
    'weight' => '42',
    'parent' => '',
    'fields' => array(),
    'depth' => 0,
    'parents' => array(
      '0' => '',
    ),
  );

  // Exported group: group_lua_suspend
  $groups['landuseauthorization-group_lua_suspend'] = array(
    'group_type' => 'multigroup',
    'type_name' => 'landuseauthorization',
    'group_name' => 'group_lua_suspend',
    'label' => 'Suspended Rights',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => 'Rights of the authorization holder that have been suspended.',
      ),
      'display' => array(
        'description' => '',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'label' => NULL,
      ),
      'multigroup' => array(
        'multiple-columns' => 1,
        'required' => 0,
        'multiple' => '1',
        'labels' => array(
          '0' => '1',
          '1' => '2',
          '2' => '3',
          '3' => '4',
          '4' => '',
          '5' => '',
          '6' => '',
          '7' => '',
          '8' => '',
          '9' => '',
        ),
      ),
    ),
    'weight' => '45',
    'parent' => '',
    'fields' => array(
      '0' => 'field_lua_suspended',
      '1' => 'field_lua_suspendedstart',
      '2' => 'field_lua_suspendedend',
    ),
    'depth' => 0,
    'parents' => array(
      '0' => '',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Condition');
  t('Letter of Clearance');
  t('Suspended Rights');

  return $groups;
}
