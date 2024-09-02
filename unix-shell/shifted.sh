#!/usr/bin/env bash

# Try:
# $ ./shifted.sh carl clara 'john smith' "martin luther king"

i=1
j=$#
while [ $i -le $j ]
do
  echo "Param $i: $1";
  i=$((i + 1))
  shift 1
done
