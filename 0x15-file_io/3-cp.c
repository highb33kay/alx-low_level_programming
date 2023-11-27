#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * copy_file - copies the content of a file to another file
 * @file_from: file to copy from
 * @file_to: file to copy to
 *
 * Return: 1 on success
 * -1 on failure
 * 1 if file_from does not exist
 * 1 if file_to cannot be created or written to
 * 1 if file_to is NULL
 * 1 if file_from is NULL
 */
int copy_file(const char *file_from, const char *file_to)
{
	int fd, fd2, i, r, w;
	char *buf;

	if (file_from == NULL)
		return (-1);

	if (file_to == NULL)
		return (-1);

	fd = open(file_from, O_RDONLY);
	if (fd == -1)
		return (-1);

	fd2 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
		return (-1);

	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
		return (-1);

	r = read(fd, buf, 1024);
	if (r == -1)
		return (-1);

	for (i = 0; buf[i] != '\0'; i++)
		;

	w = write(fd2, buf, i);
	if (w == -1)
		return (-1);

	close(fd);
	close(fd2);
	free(buf);
	return (1);
}

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success
 * 97 if argc is not 3
 */
int main(int argc, char *argv[])
{
	int cp;

	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	cp = copy_file(argv[1], argv[2]);
	if (cp == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	return (0);
}
