#! /usr/bin/env bash

#Remove and generate bin
rm my_*.o
gcc -c my_*.c

#make the lib
ar -rv libmy.a *.o
