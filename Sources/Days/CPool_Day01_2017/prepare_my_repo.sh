#!/usr/bin/env bash

FILENAME=$1

blih -u fenelon.pinson@epitech.eu repository create $FILENAME

blih -u fenelon.pinson@epitech.eu repository setacl $FILENAME ramassage-tek r

blih -u fenelon.pinson@epitech.eu repository getacl $FILENAME


