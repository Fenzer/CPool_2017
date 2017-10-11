#!/usr/bin/env bash

find . -type f -o -type d | wc -l | sed 's/ //g'
