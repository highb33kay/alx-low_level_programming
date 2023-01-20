#!/bin/bash

# Get all the .c files in the current directory
files=$(ls *.c)

# Compile all the .c files into object files
for file in $files; do
    gcc -c $file -o ${file%.c}.o
done

# Create the dynamic library liball.so from the object files
gcc -shared -o liball.so *.o

echo "Dynamic library liball.so created successfully!"
