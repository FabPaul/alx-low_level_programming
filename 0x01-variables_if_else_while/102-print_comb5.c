#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - A program that prints combination of 2 3 digits
* Return: 0 (Success)
*/
int main(void)
{
	int a;
	int b;

	for (a = 0; a < 100; a++)
	{
		for (b = a; b < 100; b++)
		{
			if (a != b)
			{
				if (a <= b)
				{
					putchar('0' + (a / 10));
					putchar('0' + (a % 10));
					putchar(' ');
					putchar('0' + (b / 10));
					putchar('0' + (b % 10));

					if (a != 98 || b != 99)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
