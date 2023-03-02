#include "main.h"
#include <string.h>

/**
 * reverse_array - A function that reverses the content of an array of int
 * @a: The int array to be reversed
 * @n: number of elements in the int array
 * Return: null
 */

void reverse_array(int *a, int n)
{
	int b, i;

	for (i = n - 1; i >= n / 2; i--)
	{
		b = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = b;
	}
}
