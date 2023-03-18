#include <stdio.h>

/**
 * main - combinations of two digit numbers
 *
 * Return: always 0
 */

int main(void)

{
	int e, s;

	for (e = 0; e < 100; e++)
	{
		for (s = 0; s < 100; s++)
		{
			if (e < s)
			{
				putchar((e / 10) + 48);
				putchar((e % 10) + 48);
				putchar(' ');
				putchar((s / 10) + 48);
				putchar((s % 10) + 48);
				if (e != 98 || s != 99)
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
