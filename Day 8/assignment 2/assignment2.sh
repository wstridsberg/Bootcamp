#!/usr/bin/env bash

git clone https://github.com/wstridsberg/Bootcamp.git

cd Bootcamp/"Day 7"/"assignment 1"

make

export LD_LIBRARY_PATH=.

./shapes
