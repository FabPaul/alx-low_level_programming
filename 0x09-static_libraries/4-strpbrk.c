#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Function that searches a string for any set of bytes
 * @s: first character
 * @accept: second
 * Return: set of bytes
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}

	return ('\0');
}
