#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - Function that prints a stringin rev
 * @s: string character
 * Return: Reverse of a string
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
