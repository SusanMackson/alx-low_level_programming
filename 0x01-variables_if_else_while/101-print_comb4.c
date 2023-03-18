#include <stdio.h>

/**
 * main - program that prints all possible differnt combinations of three digit
 *
 * Return: always 0
 */

int main(void)

{
	int s, e, a;

	for (s = 48; s < 58; s++)
	{
		for (e = 49; e < 58; e++)
		{
			for (a = 50; a < 58; a++)
			{
				if (a > e && e > s)
				{
					putchar(s);
					putchar(e);
					putchar(a);
					if (s != 55 || e != 56)
					{
						putchar(',');
						putchar(' ');
					}

				}
			}

		}
	}
	putchar('\n');
	return (0);
}
