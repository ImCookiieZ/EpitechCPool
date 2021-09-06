#!/bin/bash
sed '1~2d'| cut -d: -f 1 | rev | sort -r | head -n $MY_LINE2 | tail -n (($MY_LINE1)-($MY_LINE1) | sed ':a;N;$!ba;s/\n/, /g' | sed  "a." |  tr -d "\n"  | sed -e "s/.$/.\n/"
