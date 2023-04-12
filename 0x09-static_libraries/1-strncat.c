#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int m;
	int s;

	m = 0;
	while (dest[m] != '\0')
	{
		m++;
	}
	s = 0;
	while (s < n && src[s] != '\0')
	{
		dest[m] = src[s];
		m++;
		s++;
	}
	dest[m] = '\0';
	return (dest);
}
