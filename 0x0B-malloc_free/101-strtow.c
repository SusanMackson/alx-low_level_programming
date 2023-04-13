#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int map, m, v;

	map = 0;
	v = 0;

	for (m = 0; s[m] != '\0'; m++)
	{
		if (s[m] == ' ')
			map = 0;
		else if (map == 0)
		{
			map = 1;
			v++;
		}
	}

	return (v);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int v, e = 0, len = 0, words, o = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (v = 0; v <= len; v++)
	{
		if (str[v] == ' ' || str[v] == '\0')
		{
			if (o)
			{
				end = v;
				tmp = (char *) malloc(sizeof(char) * (o + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[e] = tmp - o;
				e++;
				o = 0;
			}
		}
		else if (o++ == 0)
			start = v;
	}

	matrix[e] = NULL;

	return (matrix);
}
