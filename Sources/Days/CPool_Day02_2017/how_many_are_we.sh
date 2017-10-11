#!/usr/bin/env bash

if [ $1 ]
then
	cut -f 3 -d ';' | grep -i $1 | wc -l
else
	wc -l;
fi
