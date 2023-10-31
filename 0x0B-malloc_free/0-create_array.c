#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: storaged char
 *
 * Return: pointer of an array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);

	while (i < size)
	{
		array[i] = c;
		i++;
	}

	return (array);
}

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
	create_array(0, 'H');
	printf("I think it worked :)\n");
	free(a);
	return (0);
}
