#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 1024

/**
 * copy_file - copies the content of a file to another file
 * @file_from: file to copy from
 * @file_to: file to copy to
 *
 * Return: 0 on success, exit with code 97, 98, 99, or 100 on failure
 */
int copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to, bytes_read, bytes_written;
	char buf[BUF_SIZE];

	if (file_from == NULL || file_to == NULL)
		dprintf(2, "Usage: cp file_from file_to\n"), exit(97);

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		dprintf(2, "Error: Can't read from file %s\n", file_from), exit(98);

	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
		dprintf(2, "Error: Can't write to %s\n", file_to), exit(99);

	while ((bytes_read = read(fd_from, buf, BUF_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buf, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
			dprintf(2, "Error: Can't write to %s\n", file_to), exit(99);
	}

	if (bytes_read == -1)
		dprintf(2, "Error: Can't read from file %s\n", file_from), exit(98);

	if (close(fd_from) == -1)
		dprintf(2, "Error: Can't close fd %d\n", fd_from), exit(100);

	if (close(fd_to) == -1)
		dprintf(2, "Error: Can't close fd %d\n", fd_to), exit(100);

	return (0);
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, exit with code 97 or 98 on failure
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
		dprintf(2, "Usage: cp file_from file_to\n"), exit(97);

	copy_file(argv[1], argv[2]);

	return (0);
}
