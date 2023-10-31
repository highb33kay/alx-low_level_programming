#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: The length of @s.
 */
int main(void)
{
    char *s;
    int len;

    s = _strdup("ALX SE");
    printf("%s\n", s);
    free(s);
    return (0);
}
