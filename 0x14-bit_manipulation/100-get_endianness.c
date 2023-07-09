#include "main.h"

/**
 * get_endianness - this function checks if a machine is little or big endian
 * Return: returns 0 on big, 1 on little
 */

int get_endianness(void)
{
	unsigned int p = 1;
	char *c = (char *) &p;

	return (*c);
}
