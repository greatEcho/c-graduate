#!/usr/bin/env bash

# Try:
# $ ./positional.sh -b 10 -f myfolder

while getopts b:f: flag
do
  case ${flag} in 
    b) border=${OPTARG};;
    f) folder=${OPTARG};;
  esac
done
echo "folder is $folder"
echo "border is $border"

