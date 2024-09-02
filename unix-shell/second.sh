#!/bin/bash

folder=sfolder
mkdir -p $folder
for i in $(seq 1 1 $border)
do
  echo "processing: $i"
  echo $i > "${folder}/${i}.in"
done
