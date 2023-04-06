#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_to_unit - Function that converts a binary to an unsigned int
 * @b: A pointing string of 0 and 1 chars
 * Return: The converted number of 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
			number = number << 1;
		else if (b[i] == '1')
			number = (number << 1) | 1;
		else
			return (0);
	}

	return (number);
}
