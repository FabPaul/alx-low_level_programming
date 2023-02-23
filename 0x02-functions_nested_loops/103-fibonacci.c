#include <stdio.h>

/**
 * main - sum of even fibonacci
 * Return: 0 (success)
 */

int main(void)
{
	int a = 0;
	long s = 1, d = 2, sum = d;

	while (d + s < 4000000)
	{
		d += s;
		if (d % 2 == 0)
			sum += d;
		s = d - s;
		++a;
	}
	printf("%ld\n", sum);
	return (0);
}
