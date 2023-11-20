#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void check_IO_stat(int stat, int fd, char *filename, char mode);

/**
 * main - copies file contents to another file
 * @argc: number of arguments in the program
 * @argv: arguments passed
 *
 * Return: 1 on success, exit otherwise
 *
 * Description: if the number of argument is not correct, exit with code 97
 */
int main(int argc, char *argv[])
{
	int src, dest, n_read = 1024, wrote, close_src, close_dest;
	unsigned int mode = S_IRUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
		exit(97);
	}
	src = open(argv[1], O_RDONLY);
	check_IO_stat(src, -1, argv[1], '0');
	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	check_IO_stat(dest, -1, argv[2], 'w');
	while (n_read == 1024)
	{
		n_read = read(src, buffer, sizeof(buffer));
		if (n_read == -1)
			check_IO_stat(-1, -1, argv[1], '0');
		wrote = write(dest, buffer, n_read);
		if (wrote == -1)
			check_IO_stat(-1, -1, argv[2], 'w');
	}
	close_src = close(src);
	check_IO_stat(close_src, src, NULL, 'C');
	close_dest = close(dest);
	check_IO_stat(close_dest, dest, NULL, 'C');
	return (0);
}
/**
 * checl_IO_stat - checks if a file can be opened or closed
 * @stat: file decriptor to the file to be opened
 * @filename: name of the file
 * @mode: closing or opening of file
 * @fd: file descriptors
 * Return: void
 * Description: if file_from does not exist, or can't be read,
 * exit with code 98
 * if you can't create or write to file_to, exit with code 99
 * if you can not close a file descriptor , exit with code 100
 */
void check_IO_stat(int stat, int fd, char *filename, char mode)
{
	if (mode == 'C' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: cant close fd %d\n", fd);
		exit(100);
	}
	else if (mode == '0' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: cannot read from filr %s\n", filename);
		exit(98);
	}
	else if (mode == 'W' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", filename);
		exit(99);
	}
}
