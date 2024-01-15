#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stand out
 * @c: the character to print
 * Return: On success 1, otherwise -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
