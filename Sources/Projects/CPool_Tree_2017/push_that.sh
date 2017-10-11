#!bash

git add .

if [$1]
then
	git commit -m $1
else
	git commit -m "No comment."
fi

git push
