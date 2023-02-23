#include "main.h"

/**
 * print_triangle - Function that prints a triangle
 * @size: size of the triangle
 * Return: Triangle
 */

void print_triangle(int size)
{
	int a, s, d;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			for (s = size - a; s > 1; s--)
			{
				_putchar(32);
			}
			for (d = 0; d <= a; d++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
