#include "main.h"

/**_strcomp -  compresstwo strings values
 * @si: string 1
 * @s2: string 2
 * Return: the difference
 */
int _strcmp(char sl, char *s2)
{
	int i;

	i = 0;
	while (sl[i] != '\0' && s[i] != '\0")
	{
		if (sl[i] !=  s2[i])
		{
			return (sl[i] - s2[i]);
		}
	i++;
	}
	return (0);
}
