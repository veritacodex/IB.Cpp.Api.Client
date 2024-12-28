#!/bin/bash

clear
rm -rf build
mkdir build
cd build || exit
/usr/bin/cmake ..
make
cd ..
