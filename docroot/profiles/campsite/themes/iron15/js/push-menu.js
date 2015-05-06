jQuery(function ($) {

  var menuLeft = document.getElementById( 'pmenu-s1' ),
  		menuRight = document.getElementById( 'pmenu-s2' ),
      showLeftPush = document.getElementById( 'showLeftPush' ),
  		showRightPush = document.getElementById( 'showRightPush' ),
  		body = document.body;


  showLeftPush.onclick = function() {
  	classie.toggle( this, 'active' );
  	classie.toggle( body, 'pmenu-push-toright' );
  	classie.toggle( menuLeft, 'pmenu-open' );
  };

  if (menuRight !== null){
    showRightPush.onclick = function() {
    	classie.toggle( this, 'active' );
    	classie.toggle( body, 'pmenu-push-toleft' );
    	classie.toggle( menuRight, 'pmenu-open' );
    };
  }

 // removed tooltips in push menu
  $('.pmenu [data-toggle=tooltip]').tooltip('destroy');

});
