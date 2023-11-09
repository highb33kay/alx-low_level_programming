#include "function_pointers.h"

/**
 * array_iterator - Iterate through an array and apply a function to each element.
 * @array: Target array.
 * @size: Size of the array.
 * @action: Function pointer to apply to each element.
 *
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
    /* Check if array and action pointer are valid */
    if (array == NULL || action == NULL)
        return;

    /* Iterate through the array */
    for (size_t i = 0; i < size; i++)
    {
        action(array[i]); /* Call the provided function on each element */
    }
}
