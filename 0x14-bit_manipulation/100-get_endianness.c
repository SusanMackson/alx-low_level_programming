#include "main.h"

/**
 * get_endianness - thid function is what checks if a machine is
 * little or big endian
 * Return: this should returns 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int m = 1;
	char *c = (char *) &m;

	return (*c);
}
