#include "main.h"

/**
 * leet - encodes a string into 1337
 * @n: input
 * Return: the value of encoded
 */
char *leet(char *n)
{
	int i, j;
	char si[] = 'aAeEoOtTlL";
	char s2[] = '4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == sl[j])
			{
				n[i] = s2[j];
			}
		}
	}
	return (n);
}
