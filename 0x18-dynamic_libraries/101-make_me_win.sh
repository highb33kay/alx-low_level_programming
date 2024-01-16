#!/bin/bash
echo 'int main() { return 9; }' > libwin.c
gcc -o libwin.so -shared libwin.c
export LD_PRELOAD=$PWD/libwin.so