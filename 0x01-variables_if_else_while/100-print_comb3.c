#include <stdio.h>

/**
 * main - program taht prints all possible different combinations
 *
 * Return: always 0
 */

int main(void)

{
	
	int s, e;

	for (s = 48; s <= 56; s++)
	{
		for (e = 49; e <= 57; e++)
		{
			if (e > s)
			{
				putchar(s);
				putchar(e);
				if (s != 56 || e != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
