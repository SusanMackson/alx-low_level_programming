#include "main.h"

/**
 * append_text_to_file - this is the function that appends text
 * at the end of a file
 * @filename: this points to the name of the file
 * @text_content: this calls the string to add to the end of the file
 * Return: prints -1 If the function fails or filename is NULL also
 * If the file does not exist the user lacks write permissions print -1
 * Otherwise print 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
