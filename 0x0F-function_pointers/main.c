#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name_wrapper - Prints a name.
 * @name: Name to print.
 *
 * Return: Nothing.
 */

void print_name_wrapper(char *name)
{
    printf("%s\n", name);
}

/**
 * main - Entry point.
 * Test the code.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
    char *name = "Danton Rodriguez Molina";
    void (*f)(char *) = print_name_wrapper;

    print_name(name, f);

    return (0);
}