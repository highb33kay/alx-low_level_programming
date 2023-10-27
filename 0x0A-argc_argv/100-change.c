#include <stdio.h>
#include <stdlib.h>
/**
 * isInteger - checks if a string is an integer
 * @s: string to check
 * Return: 1 if true, 0 if false
 */

int isInteger(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return 0;
	}
	return 1;
}

int main(int argc, char *argv[])
{
	int i = 0, coinsUsed = 0, coin = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return 1;
	}

	if (isInteger(argv[1]))
	{
		i = atoi(argv[1]);
		while (i > 0 && coin <= 4)
		{
			if (i >= coins[coin])
			{
				i -= coins[coin];
				coinsUsed++;
			}
			else
				coin++;
		}
	}

	printf("%d\n", coinsUsed);
	return 0;
}
