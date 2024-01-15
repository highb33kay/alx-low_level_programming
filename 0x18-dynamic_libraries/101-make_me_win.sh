#!/bin/bash

echo -e "#include <stdio.h>\nvoid srand(unsigned int seed) { } \nint rand(void) { return 6; }" > /tmp/gm_cheat.c
gcc -shared -fPIC -o /tmp/gm_cheat.so /tmp/gm_cheat.c
mv /tmp/gm_cheat.so .
