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
      fade: true,
      autoplay: true
   });

    // add image to background image
    $('.news-slider .slide-item').each(function(){

        var imageUrl = $(this).find('.slide-image img').attr('src');
        $(this).css('background-image', 'url(' + imageUrl + ')');

    });


});
