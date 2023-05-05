#include "main.h"

/**
 * print_binary - this function is what prints the binary equivalent of a
 * decimal number
 * @n: this is number to print in binary function
 */
void print_binary(unsigned long int n)
{
	int m, count = 0;
	unsigned long int current;

	for (m = 63; m >= 0; m--)
	{
		current = n >> m;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
