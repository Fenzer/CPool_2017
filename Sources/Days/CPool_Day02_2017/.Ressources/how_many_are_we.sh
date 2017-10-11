#!bash

if [ $1 ]
then
	cut -f 3 -d ';' | grep $1 | wc -l
else
	wc -l;
fi
