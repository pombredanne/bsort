#!/bin/bash

rm -f MASSA_TESTE.DAT 2>/dev/null
for reg in $(seq 1000)
do

  v_rand=$RANDOM
  date --date "${v_rand} day ago" "+%Y-%m-%d %H:%M:%S:%N" | awk '{
  printf("%09d%09d%s%04007d", 0,0, substr($0,1,23),0)
  }' >> MASSA_TESTE.DAT

done
