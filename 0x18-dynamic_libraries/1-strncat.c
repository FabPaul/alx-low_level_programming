#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - A function that concatenates 2 strings
 * @dest: The string to be concatenated
 * @src: The string to concatenate to dest
 * @n: number of bytes to add to dest
 * Return: an empty string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, d = 0;


	while (dest[i++])
		d++;
	for (i = 0; src[i] && i < n; i++)
		dest[d++] = src[i];

	return (dest);
}
