<?php dsm($user_profile); ?>

<div class="wrapper">
       <div class="row">
           <div class="col-sm-8">
               <?php print render($user_profile['field_user_picture']);  ?>
               <?php print render($user_profile['field_user_first_name']);  ?>
               <?php print render($user_profile['field_user_last_name']);  ?>
               <?php print render($user_profile['field_user_job_title']);  ?>
               <?php print render($user_profile['field_user_about_me']);  ?>
               <?php print render($user_profile['field_user_country']);  ?>
               <?php print render($user_profile['field_user_social_facebook']);  ?>
              <?php print render($user_profile['field_user_social_twitter']);  ?>
               <?php print render($user_profile['field_user_social_linkedin']);  ?>
               <?php print render($user_profile['field_user_social_facebook']);  ?>
           </div>
           <div class="col-sm-4">
               <?php print render($user_profile['user_picture']);  ?>
               <?php print render($user_profile['field_user_participate_days']);  ?>
               <?php print render($user_profile['field_user_dietary_needs']);  ?>
               <?php print render($user_profile['field_user_job_speeding_date']);  ?>
               <?php print render($user_profile['field_user_size_t_shirt']);  ?>
           </div>
        </div>
    </div>