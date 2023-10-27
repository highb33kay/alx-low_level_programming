#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stand out
 * @c: the character to print
 * Rreturn: On Success 1 else -1
 */
int _putchar(char c)
{
	int i = 1;
	return (write(i, &c, 1));
}
