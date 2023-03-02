#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - A string that concatenates 2 strings
 * @src: The source string
 * @dest: The destination string
 * Return: Concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int d = 0, i;

	while (dest[d])
	{
		d++;
	}
	for (i = 0; src[i] != 0; i++)
	{
		dest[d] = src[i];
		d++;
	}

	dest[d] = '\0';

	return (dest);
}
