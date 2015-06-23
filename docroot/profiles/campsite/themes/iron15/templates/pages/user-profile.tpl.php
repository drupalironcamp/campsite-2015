<?php //dsm($user_profile) ?>

<?php if ($variables['elements']['#view_mode'] == 'attendee'): ?>
    <div class="user-attendee">
    <div class= "user-image">
        <?php
        $link = drupal_get_path_alias('user/' .$variables['elements']['#account']->uid);
         if (!empty($user_profile['field_user_picture'][0]['#item']['uri'])){
        print l(theme_image_style(
            array(
                'style_name' => 'thumbnail',
                'path' => $user_profile['field_user_picture'][0]['#item']['uri'],
                'attributes' => array('class' => 'avatar'),
                "height" => NULL,
                "width" => NULL
            )),
            $link, array('html'=>TRUE));
    }else {
        print l('<div class="svg-drupal"></div>', $link, array('class' => 'svg-drupal', 'html'=>TRUE));
    } ?></div>
        <div class="name">
            <?php print render($user_profile['field_user_first_name']);  ?>
            <?php print render($user_profile['field_user_last_name']);  ?>
        </div>
        <?php print render($user_profile['field_user_job_title']);  ?>
        <br>
    </div>

<?php else: ?>
<div class="wrapper">

       <div class="row">
           <div class="col-sm-8">
               <?php print render($user_profile['field_user_picture']);  ?>
               <?php print render($user_profile['field_user_first_name']);  ?>
               <?php print render($user_profile['field_user_last_name']);  ?>
               <?php print render($user_profile['summary']);  ?>
               <?php print render($user_profile['field_user_job_title']);  ?>
               <?php print render($user_profile['field_user_organization']);  ?>
               <?php print render($user_profile['field_user_about_me']);  ?>
               <?php print render($user_profile['field_user_country']);  ?>
               <?php print render($user_profile['field_user_social_facebook']);  ?>
              <?php print render($user_profile['field_user_social_twitter']);  ?>
               <?php print render($user_profile['field_user_social_linkedin']);  ?>
               <?php print render($user_profile['field_user_social_dorg']);  ?>
           </div>
           <div class="col-sm-4">
               <?php print render($user_profile['links']); ?>
               <?php print render($user_profile); ?>
           </div>
        </div>
    <a href="/user/logout" class="btn btn-default logout">Log out</a>
    </div>
<?php endif; ?>