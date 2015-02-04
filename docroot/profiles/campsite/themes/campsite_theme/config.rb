# Require any additional compass plugins here.

http_path            = "/"
sass_dir             = "sass"
css_dir              = "css"
fonts_dir            = "fonts"
images_dir           = "img"
generated_images_dir = "img-generated"
javascripts_dir      = "js"

Sass::Script::Number.precision = 9

# Set the environment as CLI parameter like this:
# bundle exec compass compile --force --environment development
# bundle exec compass compile --force --environment production
# When this option is set here then the CLI parameter does not take any effect.
#environment = :development
#environment = :production

is_production = (environment == :production)

# You can select your preferred output style here.
# (can be overridden via the command line)
# output_style = :expanded or :nested or :compact or :compressed
output_style = is_production ? :compressed : :expanded

# To enable relative paths to assets via compass helper functions. Uncomment:
# relative_assets = true

line_comments = !is_production
sourcemap = !is_production
debug_info = !is_production
