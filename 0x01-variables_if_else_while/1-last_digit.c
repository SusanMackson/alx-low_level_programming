#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - this prints the last number
 *
 * Return: always zero
 */
int main(void)
{
	int n;
	int s;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	s = n % 10;
	if (s > 5)
		printf("Last digits of %d is %d and is greater than 5\n", n, s);
	else if (s == 0)
		printf("Last digits of %d is %d and 0\n", n, s);
	else if (s < 6 && s != 0)
		printf("Last digits of %d is %d and less than 6 and not 0\n", n, s);
	printf("\n");

	return (0);
}
