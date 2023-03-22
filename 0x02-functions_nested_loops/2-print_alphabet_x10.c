#include "main.h"
/**
 * print_alphabet_x10 - that prints letter 10 times
 */

void print_alphabet_x10(void)
{
	char m;
	int i;
		i = 0;
		while (i < 10)
		{
			m = 'a';
			while (m <= 'z')
			{
				_putchar(m);
				m++;
			}
			_putchar('\n');
			i++;
		}
}
