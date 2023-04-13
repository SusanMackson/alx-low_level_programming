#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *aaa;
	int m, s = 0;

	if (str == NULL)
		return (NULL);
	m = 0;
	while (str[m] != '\0')
		m++;

	aaa = malloc(sizeof(char) * (m + 1));

	if (aaa == NULL)
		return (NULL);

	for (s = 0; str[s]; s++)
		aaa[s] = str[s];

	return (aaa);
}
