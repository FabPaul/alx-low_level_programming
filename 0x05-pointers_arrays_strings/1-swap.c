#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * swap_int - Function that swaps the value of 2 ints
 * @a: first value to use
 * @b: second value to use
 * Return: null
 */

void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
