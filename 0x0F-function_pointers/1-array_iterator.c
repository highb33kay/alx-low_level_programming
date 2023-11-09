#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - Executes a function given as a parameter on each element of
 * an array.
 * @array: Array to iterate.
 * @size: Size of the array.
 * @action: Pointer to the function to use.
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
    size_t i;

    if (array == NULL || action == NULL)
    {
        return;
    }
    else
    {
        for (i = 0; i < size; i++)
        {
            action(array[i]);
        }
    }
}
