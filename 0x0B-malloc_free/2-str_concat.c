#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int m, mi;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	m = mi = 0;
	while (s1[m] != '\0')
		m++;
	while (s2[mi] != '\0')
		mi++;
	conct = malloc(sizeof(char) * (m + mi + 1));

	if (conct == NULL)
		return (NULL);
	m = mi = 0;
	while (s1[m] != '\0')
	{
		conct[m] = s1[m];
		m++;
	}

	while (s2[mi] != '\0')
	{
		conct[m] = s2[mi];
		m++, mi++;
	}
	conct[m] = '\0';
	return (conct);
}
