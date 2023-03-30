#include "main.h"
/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int m, s;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (m = 0; n[m] != '\0'; m++)
	{
		for (s = 0; s < 10; s++)
		{
			if (n[m] == s1[s])
			{
				n[m] = s2[s];
			}
		}
	}
	return (n);
}
