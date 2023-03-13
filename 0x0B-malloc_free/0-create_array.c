#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - A function that creates an arr of char and
 * initializes a specific char
 * @size: Array size
 * @c: Char to use
 * Return: NULL if 0, else, the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
	{
		return (NULL);
	}

	a = malloc(size * sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}

	return (a);
}
