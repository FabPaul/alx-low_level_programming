#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - Function that executes a function
 * given as param on each element of an arr
 * @array: Array of the function
 * @size: size of the array
 * @action: Pointer to the function
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if ((array == NULL) || (action == NULL))
		return;

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
