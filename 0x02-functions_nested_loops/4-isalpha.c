#include "main.h"

/**
 * _isalpha - checks for uppercase letter
 * @c: character to be checked
 *
 * Return:  if character is a letter.  otherwise
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
