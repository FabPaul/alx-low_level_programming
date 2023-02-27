#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * puts2 - Function that prints every character of a string
 * @str: string to use
 * Return: null
 */

void puts2(char *str)
{
	int i, j = 0;

	while (str[j] != '\0')
	{
		j++;
	}

	for (i = 0; i < j; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
