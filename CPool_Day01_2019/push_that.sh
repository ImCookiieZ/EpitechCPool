#!/bin/bash
git add -A
if [$1 == ""]
then
	git commit -a -m "empty"
else
	git commit -a -m $1
fi 
	git push 
