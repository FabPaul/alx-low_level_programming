#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - Function that prints a string & \n
 * @s: char to use
 * Return: String and new line
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;

	_puts_recursion(s);
}
