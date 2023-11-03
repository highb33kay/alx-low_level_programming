#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - Finds the length of a string
 * @str: The string to be measured
 *
 * Return: The length of the string
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		;

	return (i);
}

/**
 * main - multiples two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	unsigned long int a, b, res;

	int len_a, len_b;

	int i; // Declare 'i' here

	len_a = _strlen(argv[1]);
	len_b = _strlen(argv[2]);

	// Provide a valid condition for the 'for' loop
	for (i = 0; i < len_a; i++)
	{
		// Your loop logic here
	}

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);

	// Make sure to define the 'mul' function or include the relevant header file
	// res = mul(a, b);

	printf("%ld", res); // Use %ld for 'unsigned long int'
	return (0);
}
