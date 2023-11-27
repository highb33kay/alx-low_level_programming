#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file to append text to
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success
 * -1 on failure
 * 1 if filename is NULL
 * 1 if text_content is NULL
 * 1 if the file exists but cannot be appended or written to
 */
int append_text_to_file(const char *filename, char *text_content)
{

	int fd, i, w;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

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
