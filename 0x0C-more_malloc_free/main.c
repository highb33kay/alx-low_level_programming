#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int *b;

    b = malloc_checked(1024);
    printf("%p\n", (void *)b);
    free(b);
    return (0);
}