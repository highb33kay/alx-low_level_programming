#!/bin/bash

# Compile all .c files into object files
gcc -Wall -Werror -Wextra -pedantic -c *.c

# Create the dynamic library liball.so from the object files
gcc -shared -o liball.so *.o

# Clean up by removing the object files
rm *.o
