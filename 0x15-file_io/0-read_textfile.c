#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - this is the function that reads a text file
 * and prints to STDOUT
 * @letters: this is the number of letters to be read
 * @filename: this is the text file that is being read
 * Return: prints w - the actual number of bytes read and printed
 * and 0 when function fails or filename is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t t;
	ssize_t w;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
