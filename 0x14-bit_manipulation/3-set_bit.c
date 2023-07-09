#include "main.h"

/**
 * set_bit - this function sets a bit at a given index to 1
 * @n: n is the pointer to the number to change
 * @index: indexis the pointer of the bit to set to 1
 *
 * Return: Returns 1 on success, -1 on failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
