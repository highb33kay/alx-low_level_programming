#include "function_pointers.h"

/**
 * print_name - Prints a name.
 * @name: Name to print.
 * @f: Function pointer.
 *
 * Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
    if (name == NULL || f == NULL)
    {
        return;
    }
    else
    {
        f(name);
    }
}
