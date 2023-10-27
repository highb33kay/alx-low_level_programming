# create static library liball.a from all .c files in current directory
gcc -c *.c
ar -rc liball.a *.o
