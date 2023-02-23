#include "main.h"

/**
 * print_most_numbers - function that from0-9 excluding 4&2
 *
 */

void print_most_numbers(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		if (a % 50 && a % 52)

			_putchar (a);

	}
	_putchar ('\n');
}

