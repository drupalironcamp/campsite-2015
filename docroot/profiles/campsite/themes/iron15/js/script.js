jQuery(function ($) {

   $('#wrapper').fadeIn();


  // removed tooltips from modal window
   $('.login-modal [data-toggle=tooltip]').tooltip('destroy');

   $(".login-modal-button").click(function () {
     $("html, body").animate({scrollTop: 0}, 1000);
   });

   $.stellar({
    horizontalScrolling: false  });

   $('.news-slider .view-content').slick({
      dots: true,
      arrows: false
    });


});
