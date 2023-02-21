#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the sum of the multiples of 3 or 5 below 1024
 * Return: 0 (Success)
 *
 */

int main(void)
{
	int i, a = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			a += i;
		}
		i++;
	}
	printf("%d\n", z);
	return (0);
}
