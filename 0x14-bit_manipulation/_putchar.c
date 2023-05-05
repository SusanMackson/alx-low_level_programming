#include <unistd.h>

/**
 * _putchar - this is the function that writes the character c to stdout
 * @c: this prints the character to print
 *
 * Return: this returns 1 if true and 0 if false
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
