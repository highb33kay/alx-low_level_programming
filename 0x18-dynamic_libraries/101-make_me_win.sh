#!/bin/bash

echo "int rand(void) { return 9; }" > /tmp/hack.c
gcc -shared -fPIC -o /tmp/hack.so /tmp/hack.c
LD_PRELOAD=/tmp/hack.so ./gm 9 8 10 24 75 9
