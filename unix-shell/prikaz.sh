#/bin/bash
folder=myfolder
mkdir -p $folder &&
  cd $folder &&
  for i in $(seq 1 1 10);
  do
    echo $i;
    echo $i > ${i}.in;
  done &&
    cd -
