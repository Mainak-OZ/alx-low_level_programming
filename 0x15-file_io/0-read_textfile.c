#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- reads and prints a text file to the POSIX standard output
 * @filename: text file being read
 * @letters: number of letters to read and print
 * Return: r- actual number of bytes read and printed
 * Return 0 when filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fd;
	ssize_t r;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	t = read(fd, buff, letters);
	r = write(STDOUT_FILENO, buff, t);

	free(buff);
	close(fd);
	return (r);
}
