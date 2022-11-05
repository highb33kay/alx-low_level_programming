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
	printf("%d\n", argc - 1);
	return (0);
}
