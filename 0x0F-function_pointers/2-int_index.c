#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - Function that searches for an interger
 * @array: The array
 * @size: Number of elements in the array
 * @cmp: Pointer to the function to be used to compared values
 * Return: 0 (Success)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if ((array == NULL) || (cmp == NULL) || (size <= 0))
		return (-1);

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
			return (a);
	}

	return (-1);
}
