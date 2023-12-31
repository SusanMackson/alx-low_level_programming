#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - this function reads text file print to STDOUT.
 * @filename: this is the pointer to text file being read
 * @letters: pointer to the number of letters to be read
 * Return: this returns the actual number of letters read and printed
 * returns 0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t mac;
	ssize_t sus;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	sus = read(fd, buf, letters);
	mac = write(STDOUT_FILENO, buf, sus);

	free(buf);
	close(fd);
	return (mac);
}
