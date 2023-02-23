#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * main - print the largest prime factor
 * Return: 0 (Success)
 */


int main(void)
{
	long a, mf;
	long num = 612852475143;
	double squ = sqrt(num);

	for (a = 1; a <= squ; a++)
	{
		if (num % a == 0)
		{
			mf = num / a;
		}
	}
	printf("%ld\n", mf);
	return (0);
}
