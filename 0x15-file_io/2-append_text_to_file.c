#include "main.h"

/**
 * append_text_to_file - this function appends text at the end of a file.
 * @filename: this is a pointer to the name of the file.
 * @text_content: this is the string to add to the end of the file.
 *
 * Return: retuns -1 if the function fails or filename is NULL,
 * return -1 if the file does not exist the user lacks write permissions,
 * otherwise return 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, mac, hei = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (hei = 0; text_content[hei];)
			hei++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	mac = write(o, text_content, hei);

	if (o == -1 || mac == -1)
		return (-1);

	close(o);

	return (1);
}
