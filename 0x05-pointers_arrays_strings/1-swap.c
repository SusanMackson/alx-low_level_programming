#include "main.h"
#include <stdio.h>

/**
 * swap_int - a function that swaps the values of two integers
 * @a: integers to swap
 * @b: integers to swap
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
