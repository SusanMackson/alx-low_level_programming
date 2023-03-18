#include <stdio.h>

/**
 * main - program that prints number in base 16
 *
 * Return: always 0
 */

int main(void)

{
	int i;
	char s;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (s = 'a' ; s <= 'f' ; s++)
		putchar(s);
	putchar('\n');
	return (0);
}
