#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Function that returns pointer to a 2D array of int
 * @width: width of the array
 * @height: height of the array
 * Return: 2D array if success and NULL if failure
 */

int **alloc_grid(int width, int height)
{
	int z, x, c, v;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	for (z = 0; z < height; z++)
	{
		a[z] = malloc(sizeof(int) * width);

		if (a[z] == NULL)
		{
			for (x = z; x >= 0; x--)
			{
				free(a[x]);
			}
			free(a);
			return (NULL);
		}
	}
	for (c = 0; c < height; c++)
	{
		for (v = 0; v < width; v++)
		{
			a[c][v] = 0;
		}
	}
	return (a);
}
