#!/bin/bash

echo "void srand(unsigned int seed) { }" > /tmp/101-make_me_win.c
echo "int rand(void) { return 6; }" >> /tmp/101-make_me_win.c
gcc -shared -fPIC -o /tmp/101-make_me_win.so /tmp/101-make_me_win.c
chmod +x ./gm
LD_PRELOAD=/tmp/101-make_me_win.so ./gm 9 8 10 24 75 9
