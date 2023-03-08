#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen_recursion - A funtion that prints the lenght ofa string
 * @s: string char to use
 * Return: 0 (Success)
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (_strlen_recursion(s) + 1);
}
