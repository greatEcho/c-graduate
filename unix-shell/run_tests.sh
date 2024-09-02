#/bin/env bash
program=./allthree

for i in tests/*.in;
do
  echo $i;
  cat $i;
  ${program} < $i > $i{.}
done
