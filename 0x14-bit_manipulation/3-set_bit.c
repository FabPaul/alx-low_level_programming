#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * set_bit - Function that sets the value of a bit to 1 at any given index
 * @n: The pointer to the number
 * @index: The index, starting from 0 of the bit you want to set
 * Return: 1 if it works, -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8 - 1)
	{
		return (-1);
	}

	*n |= (1UL << index);
	{
		return (1);
	}
}
