#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int m;
	int s;

	m = 0;
	while (dest[m] != '\0')
	{
		m++;
	}
	s = 0;
	while (src[s] != '\0')
	{
		dest[m] = src[s];
		m++;
		s++;
	}

	dest[m] = '\0';
	return (dest);
}
