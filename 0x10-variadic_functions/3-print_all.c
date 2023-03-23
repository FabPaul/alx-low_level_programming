#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_all - function that prints anything
 * @format: for mat of what to print
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	char *string, *separator = "";
	int i = 0;

	va_list(anything);

	va_start(anything, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(anything, int));
					break;

				case 'i':
					printf("%s%d", separator, va_arg(anything, int));
					break;

				case 'f':
					printf("%s%f", separator, va_arg(anything, double));
					break;

				case 's':
					string = va_arg(anything, char *);
					if (!string)
						string = "(nil)";
					printf("%s%s", separator, string);
					break;
				default:

					i++;
					continue;

			}
			separator = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(anything);
}
