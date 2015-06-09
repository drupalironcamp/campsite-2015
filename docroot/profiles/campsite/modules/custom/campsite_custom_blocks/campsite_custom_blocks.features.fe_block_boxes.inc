<?php
/**
 * @file
 * campsite_custom_blocks.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function campsite_custom_blocks_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Mailchimp signup form';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'mailchimp_signup';
  $fe_block_boxes->body = '<div id="mc_embed_signup">
       <form action="//drupalironcamp.us9.list-manage.com/subscribe/post?u=9bffeae02306be2b6d062a2ee&amp;id=2b61b5f2fe" method="post" id="mc-embedded-subscribe-form" name="mc-embedded-subscribe-form" class="validate" target="_blank" novalidate="novalidate">
         <div id="mc_embed_signup_scroll" class="form-signup">
           <div class="mc-field-group">
             <input type="text" value="" name="FNAME" class="" id="mce-FNAME" placeholder="First Name">
           </div>
           <div class="mc-field-group">
             <input type="text" value="" name="LNAME" class="" id="mce-LNAME" placeholder="Last Name">
           </div>
           <div class="mc-field-group">
             <input type="email" value="" name="EMAIL" class="required email" id="mce-EMAIL" aria-required="true" style="cursor: auto; background-image: url(data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQCAYAAAAf8/9hAAABHklEQVQ4EaVTO26DQBD1ohQWaS2lg9JybZ+AK7hNwx2oIoVf4UPQ0Lj1FdKktevIpel8AKNUkDcWMxpgSaIEaTVv3sx7uztiTdu2s/98DywOw3Dued4Who/M2aIx5lZV1aEsy0+qiwHELyi+Ytl0PQ69SxAxkWIA4RMRTdNsKE59juMcuZd6xIAFeZ6fGCdJ8kY4y7KAuTRNGd7jyEBXsdOPE3a0QGPsniOnnYMO67LgSQN9T41F2QGrQRRFCwyzoIF2qyBuKKbcOgPXdVeY9rMWgNsjf9ccYesJhk3f5dYT1HX9gR0LLQR30TnjkUEcx2uIuS4RnI+aj6sJR0AM8AaumPaM/rRehyWhXqbFAA9kh3/8/NvHxAYGAsZ/il8IalkCLBfNVAAAAABJRU5ErkJggg==); background-attachment: scroll; background-position: 100% 50%; background-repeat: no-repeat;" placeholder="Email Address">
           </div>
           <div id="mce-responses">
             <div class="response" id="mce-error-response" style="display:none"></div>
             <div class="response" id="mce-success-response" style="display:none"></div>
           </div>    <!-- real people should not fill this in and expect good things - do not remove this or risk form bot signups-->
           <div style="position: absolute; left: -5000px;"><input type="text" name="b_9bffeae02306be2b6d062a2ee_2b61b5f2fe" tabindex="-1" value=""></div>
           <div class="clear"><input type="submit" value="Subscribe" name="subscribe" id="mc-embedded-subscribe" class="button"></div>
         </div>
       </form>
     </div>
     <script async="" src="//www.google-analytics.com/analytics.js"></script><script id="twitter-wjs" src="http://platform.twitter.com/widgets.js"></script><script type="text/javascript" src="//s3.amazonaws.com/downloads.mailchimp.com/js/mc-validate.js"></script><script type="text/javascript">(function($) {window.fnames = new Array(); window.ftypes = new Array();fnames[0]=\'EMAIL\';ftypes[0]=\'email\';fnames[1]=\'FNAME\';ftypes[1]=\'text\';fnames[2]=\'LNAME\';ftypes[2]=\'text\';}(jQuery));var $mcj = jQuery.noConflict(true);</script>
     <!--End mc_embed_signup-->';

  $export['mailchimp_signup'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Map - Venue Location';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'map_venue_location';
  $fe_block_boxes->body = '<link rel="stylesheet" href="http://cdnjs.cloudflare.com/ajax/libs/leaflet/0.7.3/leaflet.css" />
<script src="http://cdnjs.cloudflare.com/ajax/libs/leaflet/0.7.3/leaflet.js"></script>
<h2 class="pane-title">Map</h2>
<div style="height: 500px;" id="map"></div>
<script>
var map = L.map(\'map\').setView([47.494539, 19.043300], 18);


L.tileLayer(\'http://openmapsurfer.uni-hd.de/tiles/roads/x={x}&y={y}&z={z}\', {
maxZoom: 20,
}).addTo(map);

var IronIcon = L.divIcon({
    className: \'svg-iron-logo\',
    html: \'<div>Hello World</div>\',
    iconAnchor: null,
iconSize:     [20, 20]
});
L.marker([47.494539, 19.043300], {
    icon: IronIcon
}).addTo(map);

map.touchZoom.disable();
map.doubleClickZoom.disable();
map.scrollWheelZoom.disable();

</script>';

  $export['map_venue_location'] = $fe_block_boxes;

  return $export;
}
