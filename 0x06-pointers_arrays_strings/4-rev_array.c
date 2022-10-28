#include "main.h"

/**
 * reverse array - reverse an array of integers
 * @a: array
 * @n: number of elements in the array
 * Return: rev
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = ; i < n; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
