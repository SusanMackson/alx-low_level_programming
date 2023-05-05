#include "main.h"

/**
 * clear_bit - this is the function that sets the value of a given bit to 0
 * @n: n is the pointer to the number to change
 * @index: this is the index of the bit to clear
 *
 * Return: always prints 1 for success and -1 for failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
