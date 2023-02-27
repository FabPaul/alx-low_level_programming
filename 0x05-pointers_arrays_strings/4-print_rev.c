#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_rev - Function that reverses a string
 * @s: the string to use
 * Return: null
 */

void print_rev(char *s)
{
	int rev = 0;

	while (s[rev] != '\0')
	{
		rev++;
	}

	for (rev -= 1; rev >= 0; rev--)
	{
		_putchar(s[rev]);
	}
	_putchar('\n');
}
