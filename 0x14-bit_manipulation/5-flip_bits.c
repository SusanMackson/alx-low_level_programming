#include "main.h"

/**
 * flip_bits - this is the function to counts the number of bits to change
 * to get from one number to another
 * @n: the pointer of the first number
 * @m: the pointer of the second number
 *
 * Return: Returns the number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int p, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (p = 63; p >= 0; p--)
	{
		current = exclusive >> p;
		if (current & 1)
			count++;
	}

	return (count);
}
