#!/bin/bash
gcc -shared -o hack.so hack.o
export LD_PRELOAD=./hack.so:$LD_PRELOAD
