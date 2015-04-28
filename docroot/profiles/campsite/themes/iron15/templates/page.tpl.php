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
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
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

<!-- Push mobile menu -->
<?php if (!empty($primary_nav)): ?>
  <nav class="pmenu pmenu-left" id="pmenu-s1">
    <div class="icon-white-comet"></div>
    <?php print render($primary_nav); ?>
    <?php if (!empty($secondary_nav)): ?>
      <?php print render($secondary_nav); ?>
    <?php endif; ?>
  </nav>
<?php endif; ?>


<!-- Login Modal and login mobile menu -->
<?php if (!user_is_logged_in()) : ?>
  <nav class="pmenu pmenu-right" id="pmenu-s2">
    <div class="icon-drupal"></div>
    <p class="text-center"><?php print t("DRUPAL LOGIN") ?></p class="text-center">
    <?php  $elements = drupal_get_form("user_login");
      $form = drupal_render($elements);
      print $form;
    ?>
  </nav>

  <div class="modal fade login-modal" id="loginModal" tabindex="-1" role="dialog" aria-labelledby="loginModal" aria-hidden="true">
    <div class="modal-dialog">
      <div class="modal-content">
        <div class="modal-body">
          <h3 class="pull-left">Drupal</h3><h3 class="pull-right">Login</h3>
          <p>You need to <a href="#">buy a ticket</a> to be able to log in.</p>
          <?php  $elements = drupal_get_form("user_login");
            $form = drupal_render($elements);
            print $form;
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
  <?php if (user_is_logged_in()) :
    // $user = user_load($user->uid);
    // if($user->picture){
    //              print theme_image_style(
    //              array(
    //                  'style_name' => 'thumbnail',
    //                  'path' => $user->picture->uri,
    //                  'attributes' => array('class' => 'avatar')));
    //            }else{
    //           echo '<img src="replace with path to your default picture" />';
    //       }
      ?>
    <!-- User picture -->
    <?php else : ?>
    <!-- Button trigger login modal -->
    <button type="button" class="login-modal-button icon-login" data-toggle="modal" data-target="#loginModal">
      Login Modal
    </button>
    <button id="showRightPush" type="button" class="login-pmenu icon-login">
      Login Menu
    </button>
  <?php endif; ?>
</header>

<header role="banner" id="page-header">
    <div class="container">

      <div class="logo">
          <a href="/" class="icon-iron-logo"></a>
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
</header> <!-- /#page-header -->

<div class="main-container container">

  <div class="row">

    <?php if (!empty($page['sidebar_first'])): ?>
      <aside class="col-sm-3" role="complementary">
        <?php print render($page['sidebar_first']); ?>
      </aside>  <!-- /#sidebar-first -->
    <?php endif; ?>


    <section<?php print $content_column_class; ?>>
      <?php if (!empty($page['highlighted'])): ?>
        <div class="highlighted jumbotron"><?php print render($page['highlighted']); ?></div>
      <?php endif; ?>
      <?php if (!empty($breadcrumb)): print $breadcrumb; endif;?>
      <a id="main-content"></a>
      <?php print render($title_prefix); ?>
      <?php if (!empty($title)): ?>
        <h1 class="page-header"><?php print $title; ?></h1>
      <?php endif; ?>
      <?php print render($title_suffix); ?>
      <?php print $messages; ?>
      <?php if (!empty($tabs)): ?>
        <?php print render($tabs); ?>
      <?php endif; ?>
      <?php if (!empty($page['help'])): ?>
        <?php print render($page['help']); ?>
      <?php endif; ?>
      <?php if (!empty($action_links)): ?>
        <ul class="action-links"><?php print render($action_links); ?></ul>
      <?php endif; ?>
      <?php print render($page['content']); ?>
    </section>

    <?php if (!empty($page['sidebar_second'])): ?>
      <aside class="col-sm-3" role="complementary">
        <?php print render($page['sidebar_second']); ?>
      </aside>  <!-- /#sidebar-second -->
    <?php endif; ?>

  </div>
</div>
<footer class="footer">
    <div class="container icon-footer-background">
       <?php print render($page['footer']); ?>
    </div>
</footer>
