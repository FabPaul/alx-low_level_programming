#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_array - Funtion that prints n elements of an array
 * @a: an array of type int
 * @n: number of elements of the array to be printed
 * Return: null
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
