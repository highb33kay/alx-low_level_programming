#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Execute a function on each element of an array.
 * @array: Array to iterate.
 * @size: Size of the array.
 * @action: Pointer to the function to use.
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
    if (array == NULL || action == NULL)
        return;

    for (size_t i = 0; i < size; ++i)
        action(array[i]);
}
