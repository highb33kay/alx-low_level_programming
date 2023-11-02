#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory.
 * @bytes: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
void *malloc_checked(unsigned int bytes)
{
	int *pointer;

	pointer = malloc(bytes);

	if (pointer == NULL)
		exit(98);

	return (pointer);
}
