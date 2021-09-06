#!/bin/bash

grep 'theo1\|steven1\|arnaud1\|pierre-jean' | sed -e 's/theo1/Wile E. Coyote/gi' | sed -e 's/steven1/Daffy Duck/gi' | sed -e 's/arnaud1/Porky Pig/gi' | sed -e 's/pierre-jean/Marvin the Martian/gi'
