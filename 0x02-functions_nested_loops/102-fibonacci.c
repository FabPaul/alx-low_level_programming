#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -  prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: 0 CSuccess)
 */

int main(void)
{
	int i, count = 50;
	unsigned long long fib1 = 1, fib2 = 2, fib3;

	printf("%llu, %llu, ", fib1, fib2);

	for (i = 2; i < count; i++)
	{
		fib3 = fib1 + fib2;
		printf("%llu", fib3);

		if (i != count - 1)
		{
			printf(", ");
		}

		fib1 = fib2;
		fib2 = fib3;
	}
	printf("\n");

	return (0);
}
