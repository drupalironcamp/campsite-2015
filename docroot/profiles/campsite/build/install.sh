#!/bin/bash

set -e

if [ -n "${1:+x}" ]; then
  domain=$1
else
  domain='campsite.loc'
fi

cd $(dirname $0)/../../..

# base variables
script_name=$0
drupal_root=`pwd`

drush -v si -y \
    --account-mail=green@integralvision.hu \
    --site-mail=not@integralvision.hu \
    --site-name=campsite \
    --sites-subdir=default \
    campsite \

# Enable developer modules
drush en -y devel \
            diff \
            views_ui

drush features-revert-all -y

drush upwd admin --password=1234

drush -l ${domain} uli

exit 0
