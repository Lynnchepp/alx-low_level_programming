#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output.
 * @filename: text file to be read
 * @letters: number to letters to be read
 * Return: actual number of letters it could read and print
 * 0 otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t bytes_written;
	ssize_t bytes_read;
	ssize_t file_descriptor;

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	bytes_read = read(file_descriptor, buf, letters);
	bytes_written = write(STDOUT_FILENO, buf, bytes_read);

	free(buf);
	close(file_descriptor);
	return (bytes_written);
}
