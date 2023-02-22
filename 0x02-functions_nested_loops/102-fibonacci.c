#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: void
 */
int main(void)
{
	int a = 0;
	long s = 1, d = 2;

	while (a < 58)
	{
		if (a == 0)
			printf("%d", s);
		else if (a == 1)
		printf(", %d", d);
		else
		{
		d += s;
		s = d - s;
		printf(", %d", d);
		}
		++i;
	}
	printf('\n');
	return (0);
}
