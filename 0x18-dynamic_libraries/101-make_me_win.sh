#!/bin/bash
gcc -shared -o hack.so -fpic hack.c
export LD_PRELOAD=./hack.so:$LD_PRELOAD
