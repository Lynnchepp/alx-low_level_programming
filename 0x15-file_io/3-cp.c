#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void close_file(int fd);

/**
 * close_file - closes file descriptors.
 * @fd: file descriptor to close
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies file contents to another file
 * @argc: number of arguments in the program
 * @argv: array to argument pointer
 *
 * Return: 0 on success
 *
 * Description: if the number of argument is not correct, exit with code 97
 * if file_from does not exist, or can't be read, exit with code 98
 * if you can't create or write to file_to, exit with code 99
 * if you can not close a file descriptor , exit with code 100
 */
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	from = open(argv[1], O_RDONLY);
	if (from == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: can't read from file %s\n", argv[1]);
		exit(98);
	}

	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: can't write to %s\n", argv[2]);
		close_file(from);
		exit(99);
	}
	while ((r = read(from, buffer, sizeof(buffer))) > 0)
	{
		w = write(to, buffer, r);
		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error can't write to %s\n", argv[2]);
			close_file(from);
			close_file(to);
			exit(99);
		}
	}
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error can't read from file %s\n", argv[1]);
		close_file(from);
		close_file(to);
		exit(98);
	}

	close_file(from);
	close_file(to);

	return (0);
}
