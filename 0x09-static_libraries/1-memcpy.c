#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _memcpy - A function that copies a memory area
 * @dest: location of memory
 * @src: location string where it's copied to
 * @n: number of bytes
 * Return: copy of a function
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int i = n;

	for (; a < i; a++)
	{
		dest[a] = src[a];
		n--;
	}

	return (dest);
}
