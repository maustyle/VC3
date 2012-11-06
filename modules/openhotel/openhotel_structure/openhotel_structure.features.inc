<?php
/**
 * @file
 * openhotel_structure.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openhotel_structure_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function openhotel_structure_image_default_styles() {
  $styles = array();

  // Exported image style: slide_narrow_screen.
  $styles['slide_narrow_screen'] = array(
    'name' => 'slide_narrow_screen',
    'effects' => array(
      4 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '700',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: slide_normal_screen.
  $styles['slide_normal_screen'] = array(
    'name' => 'slide_normal_screen',
    'effects' => array(
      3 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '940',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function openhotel_structure_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'front_page_slideshow_slide' => array(
      'name' => t('Front Page Slideshow Slide'),
      'base' => 'node_content',
      'description' => t('This content type is used to populate the Front Page Slide Show.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'photo_gallery' => array(
      'name' => t('Photo Gallery'),
      'base' => 'node_content',
      'description' => t('Use this content type to build a photo gallery.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'testimonials' => array(
      'name' => t('Testimonials'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'unit_description' => array(
      'name' => t('Unit Description'),
      'base' => 'node_content',
      'description' => t('Bookable Unit Description.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'webform' => array(
      'name' => t('Webform'),
      'base' => 'node_content',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_default_rooms_booking_type().
 */
function openhotel_structure_default_rooms_booking_type() {
  $items = array();
  $items['standard_booking'] = entity_import('rooms_booking_type', '{
    "type" : "standard_booking",
    "label" : "Standard Booking",
    "weight" : "0",
    "data" : null,
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_rooms_unit_type().
 */
function openhotel_structure_default_rooms_unit_type() {
  $items = array();
  $items['double_bed'] = entity_import('rooms_unit_type', '{
    "type" : "double_bed",
    "label" : "Double Bed",
    "weight" : "0",
    "data" : {
      "base_price" : "100",
      "sleeps" : "2",
      "rooms_description_source" : "",
      "singlediscount" : "20"
    },
    "rdf_mapping" : []
  }');
  $items['single_bed'] = entity_import('rooms_unit_type', '{
    "type" : "single_bed",
    "label" : "Single Bed",
    "weight" : "0",
    "data" : {
      "base_price" : "80",
      "sleeps" : "1",
      "rooms_description_source" : "",
      "singlediscount" : ""
    },
    "rdf_mapping" : []
  }');
  $items['suite'] = entity_import('rooms_unit_type', '{
    "type" : "suite",
    "label" : "Suite",
    "weight" : "0",
    "data" : {
      "base_price" : "150",
      "sleeps" : "4",
      "rooms_description_source" : "",
      "singlediscount" : "20"
    },
    "rdf_mapping" : []
  }');
  $items['twin_bed'] = entity_import('rooms_unit_type', '{
    "type" : "twin_bed",
    "label" : "Twin Bed",
    "weight" : "0",
    "data" : {
      "base_price" : "100",
      "sleeps" : "2",
      "rooms_description_source" : "",
      "singlediscount" : "20"
    },
    "rdf_mapping" : []
  }');
  return $items;
}
