#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make change for an amount of money
 * @argc: count of argumnets
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0, coinsUsed = 0, coin = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return 1;
	}

	i = atoi(argv[1]);

	if (i < 0)
	{
		printf("0\n");
	}
	else
	{
		while (i > 0 && coin <= 4)
		{
			if (i >= coins[coin])
			{
				i -= coins[coin];
				coinsUsed++;
			}
			else
			{
				coin++;
			}
		}
		printf("%d\n", coinsUsed);
	}

	return 0;
}
