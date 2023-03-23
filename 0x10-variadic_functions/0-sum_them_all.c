#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - function that adds all it's parameters
 * @n: Compulsory entry
 * Return: 0 if success
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list(sumAll);
	unsigned int i, sum;

	va_start(sumAll, n);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(sumAll, int);
	}

	va_end(sumAll);

	return (sum);
}
