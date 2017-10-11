#!/usr/bin/env bash

cut -f 1 -d ":" | awk  '(NR + 1)  % 2 == 1' | rev | sort -r | head -n $MY_LINE1 | tail -n $MY_LINE2 | sed -e ':a' -e 'N' -e '$!ba' -e 's/\n/, /g' | tr "\n" "." && echo -e 
