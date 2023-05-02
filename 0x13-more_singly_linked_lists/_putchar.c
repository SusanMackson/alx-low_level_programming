#include <unistd.h>

/**
 * _putchar - this wrtes the character c to stdout
 * @c: this prints the character
 * Return: prints 1 if true and prints 0 if false
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
