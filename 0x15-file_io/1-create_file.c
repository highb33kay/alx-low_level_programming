#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success
 * -1 on failure
 * 1 if filename is NULL
 * 1 if text_content is NULL
 * 1 if the file exists, but cannot be created or written to
 */
int create_file(const char *filename, char *text_content)
{

	int fd, i, w;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	for (i = 0; text_content[i] != '\0'; i++)
		;

	w = write(fd, text_content, i);

	if (w == -1)
		return (-1);

	close(fd);
	return (1);
}
