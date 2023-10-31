#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *concat;

    concat = str_concat("Holberton ", "School");
    printf("%s\n", concat);
    free(concat);
    return (0);
}