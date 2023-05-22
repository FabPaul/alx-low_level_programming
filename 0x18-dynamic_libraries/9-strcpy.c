#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strcpy - function that copies a string
 * @dest: The destination number
 * @src: The source number
 * Return: null
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
