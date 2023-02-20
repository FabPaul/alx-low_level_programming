#include <stdio.h>
#include <stdlib.h>
#include<time.h>

/**
 * main - Different combinations of numbers
 * Result: 0 (Success)
 */

int main(void)
{
	int a;
	int i;

	for (a = 0; a < 9; a++)
	{
		i = a + 1;
		do {
			putchar('0' + a);
			putchar('0' + i);
			if (n < 8)
			{
				putchar(',');
				putchar(32);
			}
			i++
		} while (i < 10);
	}
	putchar('\n');
	return (0);
}
