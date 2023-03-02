#include "main.h"
#include <string.h>

/**
 * _strncpy - A function that copies a string
 * @dest: The string to copy
 * @src: the source string
 * @n: Number of bytes to copy
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, slen = 0;

	while (src[i++])
		slen++;
	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];
	for (i = slen; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
