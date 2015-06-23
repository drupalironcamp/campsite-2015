<?php
/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * The doctype, html, head and body tags are not in this template. Instead they
 * can be found in the html.tpl.php template in this directory.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar']: Items for the sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see bootstrap_preprocess_page()
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see bootstrap_process_page()
 * @see template_process()
 * @see html.tpl.php
 *
 * @ingroup themeable
 */
?>
<div id="wrapper">

  <!-- Push mobile menu -->
  <?php if (!empty($primary_nav)): ?>
    <nav class="pmenu pmenu-left" id="pmenu-s1">
      <a class="svg-white-comet" href="<?php print $front_page; ?>"></a>
      <?php print render($primary_nav); ?>
      <?php if (!empty($secondary_nav)): ?>
        <?php print render($secondary_nav); ?>
      <?php endif; ?>
      <ul class="social-menu list-inline">
        <li><?php print l(t('Facebook'), 'https://www.facebook.com/drupalironcamp/', array('attributes' => array('class' => array('svg-facebook-white'),'target' => "_blank"))); ?></li>
        <li><?php print l(t('Twitter'), 'https://twitter.com/drupalironcamp', array('attributes' => array('class' => array('svg-twitter-white'),'target' => "_blank"))); ?></li>
        <li><?php print l(t('info@drupalironcamp.com'), 'mailto:info@drupalironcamp.com', array('attributes' => array('class' => array('svg-mail-white'),'target' => "_blank"))); ?></li>
      </ul>
    </nav>
  <?php endif; ?>


  <!-- Login Modal and login mobile menu -->
  <?php if (!user_is_logged_in()) : ?>
    <nav class="pmenu pmenu-right" id="pmenu-s2">
      <div class="svg-drupal"></div>
      <p class="text-center"><?php print t("DRUPAL LOGIN") ?></p class="text-center">
      <?php  $elements = drupal_get_form("user_login");
        $form = drupal_render($elements);
        print $form;
      ?>
    </nav>

    <div class="modal fade login-modal" id="loginModal" tabindex="-1" role="dialog" aria-labelledby="loginModal" aria-hidden="true">
      <div class="modal-dialog">
        <div class="modal-content">
          <div class="modal-body clearfix">
            <h3 class="pull-left">Drupal</h3><h3 class="pull-right">Login</h3>
            <p>You need to <?php print l(t('buy a ticket'), 'buy-a-ticket')?> to be able to log in.</p>

            <?php  $elements = drupal_get_form("user_login");
              $form = drupal_render($elements);
              print $form.l(t('Request a new password'), 'user/password', array('attributes' => array('class' => array('btn-link'))));
            ?>

          </div>
        </div>
      </div>
    </div>
  <?php endif; ?>


  <header id="navbar" role="banner" class="<?php print $navbar_classes; ?>">
    <div class="container">
      <div class="navbar-header">


        <!-- .btn-navbar is used as the toggle for collapsed navbar content -->
        <button id="showLeftPush" type="button" class="navbar-toggle nav-pmenu">
          <span class="icon-bar"></span>
          <span class="icon-bar"></span>
          <span class="icon-bar"></span>
        </button>
      </div>

      <?php if (!empty($primary_nav) || !empty($secondary_nav) || !empty($page['navigation'])): ?>
        <div class="navbar-collapse">
          <nav role="navigation">
            <?php if (!empty($primary_nav)): ?>
              <?php print render($primary_nav); ?>
            <?php endif; ?>
            <?php if (!empty($secondary_nav)): ?>
              <?php print render($secondary_nav); ?>
            <?php endif; ?>
            <?php if (!empty($page['navigation'])): ?>
              <?php print render($page['navigation']); ?>
            <?php endif; ?>
          </nav>
        </div>
      <?php endif; ?>
    </div>

    <?php if (user_is_logged_in()) : ?>
      <div class="user-pic corner-button">
        <?php global $user; // load user avatar
        $user = user_load($user->uid);
        $link = drupal_get_path_alias('user/' . $user->uid);
        if($user->field_user_picture){
          print l(theme_image_style(
              array(
                'style_name' => 'thumbnail',
                'path' => $user->field_user_picture['und'][0]['uri'],
                'attributes' => array('class' => 'avatar'),
                "height" => NULL,
                "width" => NULL
              )),
            $link, array('html'=>TRUE));
                   }else{
          print l('<div class="svg-drupal"></div>', $link, array('class' => 'svg-drupal', 'html'=>TRUE));
              }
          ?>
      </div>
      <!-- User picture -->
      <?php else : ?>
      <!-- Button trigger login modal -->
      <button type="button" class="login-modal-button svg-login corner-button" data-toggle="modal" data-target="#loginModal">
        Login Modal
      </button>
      <button id="showRightPush" type="button" class="login-pmenu svg-login corner-button">
        Login Menu
      </button>
    <?php endif; ?>
  </header>

  <header role="banner" id="page-header" class="site-header">
      <div class="container">

        <div class="logo-wrap logo-border"></div>

        <div class="logo-wrap logo">
            <a href="<?php print $front_page; ?>" class="svg-iron-logo"></a>
        </div>

        <div class="graphics">
          <div class="svg-lines" data-grunticon-embed></div>
          <div class="svg-big-triangle01" data-stellar-ratio="0.7"></div>
          <div class="svg-big-triangle02" data-stellar-ratio="0.7"></div>
          <div class="svg-big-triangle03" data-stellar-ratio="1.1"></div>
          <div class="svg-big-triangle04" data-stellar-ratio="1.1"></div>
        </div>


        <div class="banner-img">
            <img src="<?php print base_path() . path_to_theme() ?>/images/nga.png"/>
        </div>

        <?php if (!empty($site_name)): ?>
          <div class="lead">
              <span class="site-name"><?php print $site_name; ?></span>
              <div class="divider"></div>
              <div class="camp-location"><?php print t('Budapest, Hungary');?></div>
              <div class="btn btn-sm btn-warning"><?php print t('26-30th October, 2015');?></div>
          </div>
        <?php endif; ?>

        <?php print render($page['header']); ?>

      </div>

      <ul class="social-menu list-unstyled">
        <li><?php print l(t('Facebook'), 'https://www.facebook.com/drupalironcamp/', array('attributes' => array('class' => array('svg-facebook'),'target' => "_blank"))); ?></li>
        <li><?php print l(t('Twitter'), 'https://twitter.com/drupalironcamp', array('attributes' => array('class' => array('svg-twitter'),'target' => "_blank"))); ?></li>
        <li><?php print l(t('info@drupalironcamp.com'), 'mailto:info@drupalironcamp.com', array('attributes' => array('class' => array('svg-mail'),'target' => "_blank"))); ?></li>
      </ul>

      <?php if($is_front) :?>
        <?php print $messages; ?>
        <div class="lead-buttons">

          <?php
            print l(t('<span>Buy your</span>Ticket'), 'buy-a-ticket', array('html' => TRUE, 'attributes' => array('class' => array('btn', 'btn-danger', 'btn-lg')))).
               l(t('<span>Become our</span>Sponsor'), 'become-a-sponsor', array('html' => TRUE, 'attributes' => array('class' => array('btn', 'btn-primary', 'btn-lg'))));
          ?>

        </div>
      <?php endif; ?>

  </header> <!-- /#page-header -->

  <div class="main-container <?php if(!$is_front) : print ('container'); endif; ?>">

    <div class="row">

      <section<?php if(!$is_front) : print $content_column_class; endif; ?>>
        <?php if (!empty($breadcrumb)): print $breadcrumb; endif;?>
        <a id="main-content"></a>
        <?php print render($title_prefix); ?>
        <?php if (!empty($title)): ?>
          <h1 class="page-header"><?php print $title; ?></h1>
        <?php endif; ?>
        <?php print render($title_suffix); ?>
        <?php if(!$is_front): ?>
        <?php print $messages; ?>
        <?php endif; ?>
        <?php if (!empty($tabs)): ?>
          <?php print render($tabs); ?>
        <?php endif; ?>
        <?php if (!empty($page['help'])): ?>
          <?php print render($page['help']); ?>
        <?php endif; ?>
        <?php if (!empty($action_links)): ?>
          <ul class="action-links"><?php print render($action_links); ?></ul>
        <?php endif; ?>
        <?php if (!empty($page['highlighted'])): ?>
          <?php print render($page['highlighted']); ?>
        <?php endif; ?>
        <?php print render($page['content']); ?>
      </section>

      <?php if (!empty($page['sidebar']) && (!$is_front)): ?>
        <aside class="col-md-3 col-sm-4" role="complementary">
          <?php print render($page['sidebar']); ?>
        </aside>  <!-- /#sidebar -->
      <?php endif; ?>


    </div>
  </div>
  <footer class="footer">
    <div class="svg-footer-background">
      <div class="container">
         <?php print render($page['footer']); ?>

         <a href="<?php print $front_page; ?>" class="footer-logo svg-iron-logo">
           <span class="title">IRON CAMP</span>
           2015
         </a>
         <div class="footer-message">2015 @ Built by the community
           <div class="footer-links">
            <?php print l(t('Disclaimer.'), 'buy-a-ticket') . l(t('Code of conduct.'), 'node/16'); ?>
          </div>
        </div>
      </div>
      <div class="svg-big-triangle01"></div>
      <div class="svg-big-triangle01 copy"></div>
      <div class="svg-big-triangle02"></div>
    </div>
    <script>
        var options = {
            "url": "<?php print base_path() . path_to_theme() ?>/css/twitter.css"
        };
        CustomizeTwitterWidget(options);
    </script>
  </footer>
</div>
