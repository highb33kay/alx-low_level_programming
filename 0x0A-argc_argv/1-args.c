#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints number of arguments
 * @argc: comand line arguments passed
 * @argv: commands passed
 * Return: 0
 */
int main(int argc, __attribute__((unused))char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%i\n", argc);
		return (0);
	}
}
