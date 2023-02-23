#include <stdio.h>

/**
 * main - first 52 fibonacci
 * Return: 0 (Success)
 */

int main(void)
{
	int a = 0;
	long s = 1, d = 2;

	while (a < 52)
	{
		if (a == 0)
			printf("%ld", s);
		else if (a == 1)
			printf(", %ld", d);
		else
		{
			d += s;
			s = d - s;
			printf(", %ld", d);
		}
		++i;
	}
	printf("\n");
	return (0);
}
