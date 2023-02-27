#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * rev_string - Function that reverses a string
 * @s: the string to use
 * Return: null
 */

void rev_string(char *s)
{
	int ln = 0, x = 0;
	char t;

	while (s[x++])
		ln++;

	for (x = ln -1; x >= ln / 2; x--)
	{
		t = s[x];
		s[x] = s[ln - x -1];
		s[ln - x - 1] = t;
	}
}
