#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - this prints the number of a variable, followed by a new line
 * @separator: this string to be printed between numbers
 * @n: the number of integers passed to the function
 * @...: the variable of numbers to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int digit;

	va_start(nums, n);

	for (digit = 0; digit < n; digit++)
	{
		int num = va_arg(nums, int);
	printf("%d", num);
	if (digit < n - 1 && separator != NULL)
	{
		printf("%s", separator);
	}
	}

	va_end(nums);

	printf("\n");
}
