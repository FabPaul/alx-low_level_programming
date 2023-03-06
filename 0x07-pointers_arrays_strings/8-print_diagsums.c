#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_diagsums - function that prints the sum
 * of 2  diagonals of a square of integers
 * @a: first int
 * @size: size of the int
 * Return: matrix of square int
 */

void print_diagsums(int *a, int size)
{
	int sum, sum1, sum2;

	sum = 0;
	sum1 = 0;

	for (sum2 = 0; sum2 < size; sum2++)
	{
		sum = sum + a[sum2 * size + sum2];
	}

	for (sum2 = size - 1; sum2 >= 0; sum2--)
	{
		sum1 += a[sum2 * size + (size - sum2 - 1)];
	}

	printf("%d, %d\n", sum, sum1);
}

