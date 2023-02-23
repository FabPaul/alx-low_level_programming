#include "main.h"

/**
 * print_line - Function that draws a straight line
 * @n: The number of times to print the line
 * Return: new line
 */

void print_line(int n)
{
	int a;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
