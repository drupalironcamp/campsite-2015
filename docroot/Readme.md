### Theme development

We need to use [bundler](http://bundler.io/) tool to better theming, its nstall the necessary gems which make-up the machine after you issue a few commands:

1. Go to theme folder
		
		cd docroot
		
2. Install the bundler
	
		gem install bundler
	
3. Run the install command that installs the necessary components

		bundle install --deployment
3.1 You should see this output
	
		Fetching gem metadata from https://rubygems.org/
		Installing chunky_png 1.3.1 (was 1.3.0)
		Installing multi_json 1.9.2
		Using sass 3.4.9
		Using compass-core 1.0.1
		Using compass 1.0.0
		Using bundler 1.7.9
		Your bundle is complete!
		It was installed into ./vendor/bundle
	  
4. After the install if you change the scss files, I just have to run the command that will give you the css file
	
		bundle exec compass compile
