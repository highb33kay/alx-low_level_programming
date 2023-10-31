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
    char *a;

    a = create_array(98, 'H');
    if (a == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    printf("I think it worked :)\n");
    free(a);
    return (0);
}
