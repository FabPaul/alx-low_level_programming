#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _memset - A function that fill s memory with a constant byte
 * @s: first char to use
 * @b: second char to use
 * @n: the interger to use
 * Return: A pointer to the memroy area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}
