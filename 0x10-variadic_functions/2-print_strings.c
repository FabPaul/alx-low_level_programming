#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Function that prints strings followed by a new line
 * @separator: String to be printed between the strings
 * @n: the number of strings passed to the function
 * Return: string
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list(string);
	unsigned int i;
	char *s;

	va_start(string, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(string, char *);

			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);

			if ((separator != NULL) && (i != (n - 1)))
				printf("%s", separator);
	}

	printf("\n");
	va_end(string);
}
