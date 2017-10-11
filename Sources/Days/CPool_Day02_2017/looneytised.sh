#!/usr/bin/env bash

grep -e "theo1\|steven1\|arnaud1\|pierre-jean" | sed -e "s/theo1/Wile E. Coyote/p" -e "s/steven1/Daffy Duck/p" -e "s/arnaud1/Porky Pig/p" -e "s/pierre-jean/Marvin the Martian/p" | awk 'NR % 2 == 0'
