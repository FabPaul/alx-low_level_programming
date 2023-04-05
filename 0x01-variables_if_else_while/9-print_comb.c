#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Function that prints all combination of single digits
 * Return: 0 (Success)
 */
int main(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		putchar('0' + c);
		if (c < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
