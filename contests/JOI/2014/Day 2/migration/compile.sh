#!bin/sh
NAME=migration
/usr/bin/g++ -DEVAL -static -O2 -std=c++11 -o $NAME $NAME.cpp
./$NAME	
