#include <stdio.h>

/**
 * main - this is the main function
 *
 * return: 0 at all times
 */

int main(void)
{
	printf("Size of a char: %lu\n byte(s)", sizeof(char));
	printf("size of an int: %lu\n byte(s)", sizeof(int));
	printf("size of a long int: %lu\n byte(s)", sizeof(long int));
	printf("size of a long long int: %lu\n byte(s)", sizeof(long long int));
	printf("size of a float: %lu\n byte(s)", sizeof(float));
	return (0);
}
