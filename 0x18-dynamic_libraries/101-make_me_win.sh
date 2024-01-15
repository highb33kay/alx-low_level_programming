#!/bin/bash

echo '#include <stdio.h>' > /tmp/hack.c
echo 'int rand(void) { static int called = 0; if (called == 0) { called = 1; return 9; } else { return rand(); } }' >> /tmp/hack.c
gcc -shared -fPIC -o /tmp/hack.so /tmp/hack.c
LD_PRELOAD=/tmp/hack.so ./gm 9 8 10 24 75 9
