#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints number of arguments
 * @argc: comand line arguments passed
 * @argv: commands passed
 * Return: 0
 */
int main(int argc, char **argv[])
{
	(void) argv;
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%i\n", argc - 1);
		return (0);
	}
}
