#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * flip_bits - Function that returns the n0 of bits needed to
 * flip get get from one number to another
 * @n: The first number to flip
 * @m: the second number to flip
 * Return: Flipped bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int check = 0;
	unsigned long int split = n ^ m;

	while (split)
	{
		check += split & 1;
		split >>= 1;
	}

	return (check);
}
