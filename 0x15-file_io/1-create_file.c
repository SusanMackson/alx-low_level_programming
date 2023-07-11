#include "main.h"

/**
 * create_file - this function creates a file.
 * @filename: this is the pointer to the name of the file to create.
 * @text_content: this is the pointer to a string to write to the file.
 *
 * Return: returns -1 if the function fails, otherwise return 1.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, mac, hei = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (hei = 0; text_content[hei];)
			hei++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	mac = write(fd, text_content, hei);

	if (fd == -1 || mac == -1)
		return (-1);

	close(fd);

	return (1);
}
