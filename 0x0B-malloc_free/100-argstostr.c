#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int m, s, e = 0, a = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (m = 0; m < ac; m++)
	{
		for (s = 0; av[m][s]; s++)
			a++;
	}
	a += ac;

	str = malloc(sizeof(char) * a + 1);
	if (str == NULL)
		return (NULL);
	for (m = 0; m < ac; m++)
	{
	for (s = 0; av[m][s]; s++)
	{
		str[e] = av[m][s];
		e++;
	}
	if (str[e] == '\0')
	{
		str[e++] = '\n';
	}
	}
	return (str);
}
