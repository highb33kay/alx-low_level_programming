#!/bin/bash

# Create object files from all .c files in the current directory
for file in *.c; do
    gcc -c $file -o ${file%.c}.o
done

# Create the dynamic library from all the object files
gcc -shared -o liball.so *.o
