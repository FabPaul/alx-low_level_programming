#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Function that write s a number followed by a new line
 * @separator: String to be printed between the numbers
 * @n: the number of intergers passed to function
 * Return: number
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list(number);
	unsigned int i;

	va_start(number, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(number, int));

		if ((i != (n - 1)) && (separator != NULL))

			printf("%s", separator);
	}

	printf("\n");
	va_end(number);
}
