<?php
/**
 * Implements hook_form_FORM_ID_alter().
 *
 * Allows the profile to alter the site configuration form.
 */
function system_form_install_configure_form_alter(&$form, $form_state) {
  // Pre-populate the site name with the server name.
 // $form['site_information']['site_name']['#default_value'] = 'Open Hotel';
  //$form['#submit'][] = 'openhotel_configure_form_submit';
}

/**
 * Submit callback for system_form_install_configure_form.
 */
function openhotel_configure_form_submit($form, &$form_state){
  //openhotel_create_default_content();
  $modules = array('openhotel_menu');
  module_enable($modules);
  menu_rebuild();
  variable_set('openhotel_revert_content', TRUE);
  drupal_goto('<front>');
}

/**
 * Implements hook_form_alter().
 */
function system_form_install_select_profile_form_alter(&$form, $form_state) {
  // select openhotel install profile by default
  foreach ($form['profile'] as $key => $element) {
    //$form['profile'][$key]['#value'] = 'openhotel';
  }
}

/**
 * Implements hook_init().
 */
function openhotel_init() {
  if(variable_get('openhotel_revert_content', FALSE)){
    variable_set('openhotel_revert_content', FALSE);
    $modules = array('openhotel_content');
    module_enable($modules);

    // Create Custom Footer Block
    $block = array(
      'body' => array(
        'value' => 'Developed by <a href="http://www.netstudio.gr/en">Netstudio</a>',
        'format' => 'filtered_html',
      ),
      'info' => 'Powered by Netstudio',
      'visibility' => 0,
      'pages' => '',
      'custom' => 0,
      'module' => 'block',
      'roles' => array(),
      'regions' => array('openhoteltheme' => 'footer_first'),
      'title' => '<none>',
      'weight' => 1,
    );
    openhotel_create_custom_block($block);

    cache_clear_all();
    module_load_include('inc', 'admin_menu', 'admin_menu');
    _admin_menu_flush_cache('registry');
    drupal_goto();
  }

  module_load_include('inc', 'rooms_booking_manager', 'rooms_booking_manager.availability_search');
}

function openhotel_create_default_content(){
  $file = DRUPAL_ROOT . '/profiles/openhotel/import.csv';
  require_once(DRUPAL_ROOT . '/profiles/openhotel/ParserCSV.inc');
  $parser = new ParserCSV();
  $parser->setDelimiter(",");
  $parser->setLineLimit(0);
  $parser->setStartByte(0);
  $rows = $parser->parse(new ParserCSVIterator($file));

  foreach($rows as $i => $item){
    if($i == 0) continue;
    $node = new stdClass();
    $node->nid = $item[0];
    $node->is_new = TRUE;
    $node->type = $item[1];
    $node->title = $item[2];
    $node->uid = 1;
    $node->status = 1;
    $node->language = LANGUAGE_NONE;
    $node->body[LANGUAGE_NONE][0]['value'] = $item[3];
    $node->body[LANGUAGE_NONE][0]['format'] = 'full_html';

    $photo = 'field_slide_image';
    if($node->type == 'front_page_slideshow_slide'){
      $photo = 'field_slide_image';
    }
    else{
      $photo = 'field_photo';
    }

    if(!empty($item[4])){
      $images = explode('|', $item[4]);
      foreach($images as $i => $image){
        $file = new StdClass();
        $file->uid = 1;
        $file->uri = DRUPAL_ROOT . '/profiles/openhotel/import_images/'.$image;
        $file->filemime = file_get_mimetype($file->uri);
        $file->status = 1;
        $name = $image;
        $dest = file_default_scheme() . '://'.$name;
        $file = file_copy($file, $dest);
        $node->{$photo}[LANGUAGE_NONE][$i] = (array)$file;
      }
    }

    node_save($node);
  }

  $node = new stdClass();
  $node->nid = 1;
  $node->is_new = TRUE;
  $node->type = 'webform';
  $node->title = 'Contact';
  $node->uid = 1;
  $node->status = 1;
  $node->language = LANGUAGE_NONE;
  $node->body[LANGUAGE_NONE][0]['value'] = 'You can contact us by filling out the following contact form.';
  $node->body[LANGUAGE_NONE][0]['format'] = 'full_html';
  $node->webform = array(
    'nid' => 1,
    'confirmation' => '',
    'confirmation_format' => '',
    'redirect_url' => '<confirmation>',
    'status' => 1,
    'block' => 0,
    'teaser' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'submit_notice' => 1,
    'submit_text' => '',
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'record_exists' => 1,
    'roles' => array(
        '0' => 1,
        '1' => 2,
    ),
    'emails' => array(),
    'components' => array(
      '1' => array(
        'nid' => 1,
        'cid' => 1,
        'pid' => 0,
        'form_key' => 'name',
        'name' => 'Name',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'conditional_operator' => '=',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => 0,
        'weight' => 0,
        'page_num' => 1,
      ),
      '2' => array(
        'nid' => 1,
        'cid' => 2,
        'pid' => 0,
        'form_key' => 'phone',
        'name' => 'Phone',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'conditional_operator' => '=',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => 0,
        'weight' => 1,
        'page_num' => 1,
      ),
      '3' => array(
        'nid' => 1,
        'cid' => 3,
        'pid' => 0,
        'form_key' => 'email',
        'name' => 'Email',
        'type' => 'email',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'conditional_operator' => '=',
          'width' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => 1,
        'weight' => 2,
        'page_num' => 1,
      ),
      '4' => array(
        'nid' => 1,
        'cid' => 4,
        'pid' => 0,
        'form_key' => 'message',
        'name' => 'Message',
        'type' => 'textarea',
        'value' => '',
        'extra' => array(
          'title_display' => 0,
          'private' => 0,
          'resizable' => 0,
          'disabled' => 0,
          'conditional_operator' => '=',
          'cols' => '',
          'rows' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => 0,
        'weight' => 3,
        'page_num' => 1,
      ),
    ),
  );
  node_save($node);

  $values = array(
    'unit_id' => 1,
    'type' => 'double_bed',
    'name' => 'Double Bed Room A (Phaedra)',
    'base_price' => 100,
    'bookable' => 1,
    'sleeps' => 2,
    'default_state' => 1,
    'data' => array(
      'singlediscount' => 20,
      'bed_arrangement' => array(
        'singles' => 0,
        'doubles' => 1,
      ),
    ),
  );
  $unit = rooms_unit_create($values);
  $unit->save();

  $values = array(
    'unit_id' => 2,
    'type' => 'double_bed',
    'name' => 'Double Bed Room B (Leto)',
    'base_price' => 100,
    'bookable' => 1,
    'sleeps' => 2,
    'default_state' => 1,
    'data' => array(
      'singlediscount' => 20,
      'bed_arrangement' => array(
        'singles' => 0,
        'doubles' => 1,
      ),
    ),
  );
  $unit = rooms_unit_create($values);
  $unit->save();

  $values = array(
    'unit_id' => 3,
    'type' => 'double_bed',
    'name' => 'Double Bed Room C (Kleo)',
    'base_price' => 100,
    'bookable' => 1,
    'sleeps' => 2,
    'default_state' => 1,
    'data' => array(
      'singlediscount' => 20,
      'bed_arrangement' => array(
        'singles' => 0,
        'doubles' => 1,
      ),
    ),
  );
  $unit = rooms_unit_create($values);
  $unit->save();

  $values = array(
    'unit_id' => 4,
    'type' => 'single_bed',
    'name' => 'Single Bed Room A (Chloe)',
    'base_price' => 80,
    'bookable' => 1,
    'sleeps' => 1,
    'default_state' => 1,
    'data' => array(
      'bed_arrangement' => array(
        'singles' => 1,
      ),
    ),
  );
  $unit = rooms_unit_create($values);
  $unit->save();

  $values = array(
    'unit_id' => 5,
    'type' => 'single_bed',
    'name' => 'Single Bed Room B (Erato)',
    'base_price' => 80,
    'bookable' => 1,
    'sleeps' => 1,
    'default_state' => 1,
    'data' => array(
      'bed_arrangement' => array(
        'singles' => 1,
      ),
    ),
  );
  $unit = rooms_unit_create($values);
  $unit->save();

  $values = array(
    'unit_id' => 6,
    'type' => 'suite',
    'name' => 'Suite A (Thalia)',
    'base_price' => 150,
    'bookable' => 1,
    'sleeps' => 4,
    'default_state' => 1,
    'data' => array(
      'singlediscount' => 20,
      'bed_arrangement' => array(
        'singles' => 2,
        'doubles' => 1,
      ),
    ),
  );
  $unit = rooms_unit_create($values);
  $unit->save();

  $values = array(
    'unit_id' => 7,
    'type' => 'suite',
    'name' => 'Suite B (Urania)',
    'base_price' => 150,
    'bookable' => 1,
    'sleeps' => 4,
    'default_state' => 1,
    'data' => array(
      'singlediscount' => 20,
      'bed_arrangement' => array(
        'singles' => 2,
        'doubles' => 1,
      ),
    ),
  );
  $unit = rooms_unit_create($values);
  $unit->save();

  $values = array(
    'unit_id' => 8,
    'type' => 'twin_bed',
    'name' => 'Twin Bed Room (Terpsihori)',
    'base_price' => 100,
    'bookable' => 1,
    'sleeps' => 2,
    'default_state' => 1,
    'data' => array(
      'singlediscount' => 20,
      'bed_arrangement' => array(
        'singles' => 2,
      ),
    ),
  );
  $unit = rooms_unit_create($values);
  $unit->save();

  $values = array(
    'unit_id' => 9,
    'type' => 'twin_bed',
    'name' => 'Twin Bed Room (Polymnia)',
    'base_price' => 100,
    'bookable' => 1,
    'sleeps' => 2,
    'default_state' => 1,
    'data' => array(
      'singlediscount' => 20,
      'bed_arrangement' => array(
        'singles' => 2,
      ),
    ),
  );
  $unit = rooms_unit_create($values);
  $unit->save();
}

/*
 * Create custom block.
 */
function openhotel_create_custom_block($block){
  $delta = db_insert('block_custom')
    ->fields(array(
    'body' => $block['body']['value'],
    'info' => $block['info'],
    'format' => $block['body']['format'],
  ))
    ->execute();
  // Store block delta to allow other modules to work with new block.
  $block['delta'] = $delta;

  $query = db_insert('block')->fields(array('visibility', 'pages', 'custom', 'title', 'module', 'theme', 'status', 'weight', 'delta', 'cache'));
  $query->values(array(
    'visibility' => (int) $block['visibility'],
    'pages' => trim($block['pages']),
    'custom' => (int) $block['custom'],
    'title' => $block['title'],
    'module' => $block['module'],
    'theme' => 'opendeals_theme',
    'status' => 0,
    'weight' => $block['weight'],
    'delta' => $delta,
    'cache' => DRUPAL_NO_CACHE,
  ));
  $query->execute();

  // Store regions per theme for this block
  foreach ($block['regions'] as $theme => $region) {
    db_merge('block')
      ->key(array('theme' => $theme, 'delta' => $delta, 'module' => $block['module']))
      ->fields(array(
      'region' => ($region == BLOCK_REGION_NONE ? '' : $region),
      'pages' => trim($block['pages']),
      'status' => (int) ($region != BLOCK_REGION_NONE),
    ))
      ->execute();
  }
}
