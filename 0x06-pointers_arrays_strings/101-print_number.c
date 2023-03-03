#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_number - A function that prints an interger
 * @n: the interger to print
 *
 */

void print_number(int n)
{
	int digit, divisor = 1;
	
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while (n / divisor >= 10) {
		divisor *= 10;
	}
	while (divisor > 0)
	{
		digit = (n / divisor) % 10;
		_putchar(digit + '0');
		divisor /= 10;
	}
}

int main()
{
	int n = 12345;
	print_number(n);
	return 0;
}
