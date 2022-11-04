#include <stdio.h>
/**
 * main - prints number of arguments
 * @argc: comand line arguments passed
 * @argv: commands passed
 * Return: 0
 */
int main (int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
	{
		printf(argc[i]);
		return (0);
	}
}
