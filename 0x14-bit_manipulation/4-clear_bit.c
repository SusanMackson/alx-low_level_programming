#include "main.h"

/**
 * clear_bit -this is the function that sets the value of a given bit to 0
 * @n: n is the pointer to the number to change
 * @index: index is the pointer of the bit to clear
 *
 * Return: returns 1 on success, -1 on failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
