#!/bin/bash

# Script for rebuilding the Campsite project to the same place, with the same settings.
set -e

cd $(dirname $0)/../../..

# base variables
script_name=$0
drupal_root=`pwd`
project_repo='git@gitlab.i0.hu:campsite/campsite.git'
make_file_name='campsite-dev.make'

# Check if old portal based files are needed
files_cp=0
while getopts "f files" option
do
        case "${option}"
        in
                f) files_cp=1;;
                files) files_cp=1;;
        esac
done

# Delete old .bak directory
cd ..
if [ -d ${drupal_root}.bak ]
then
  chmod -R 777 ${drupal_root}.bak
  rm -rf ${drupal_root}.bak
fi

# Backup current installation
mv ${drupal_root} ${drupal_root}.bak

# Make site
rm -rf /tmp/repo
git clone --branch master ${project_repo} /tmp/repo
drush make --working-copy --no-gitinfofile /tmp/repo/${make_file_name} ${drupal_root}
rm -rf /tmp/repo

# Copy old portal based files if needed
if [ $files_cp -eq 1 ]
then
  if [ -d ${drupal_root}.bak/sites/default/files ]
  then
    cp -R ${drupal_root}.bak/sites/default/files ${drupal_root}/sites/default/
  fi
fi

# Copy settings files
cp -v ${drupal_root}.bak/sites/default/settings.php ${drupal_root}/sites/default/
cp -v ${drupal_root}.bak/.htaccess* ${drupal_root}/

# handling PphStorm directory
if [ -d ${drupal_root}.bak/.idea ]
then
  cp -Rav ${drupal_root}.bak/.idea ${drupal_root}
fi

chmod -R 777 ${drupal_root}.bak

exit 0
