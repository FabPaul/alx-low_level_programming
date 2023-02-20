#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - A program that prints the combination of 2 numbers
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	char b;

	for (a = 48; a <= 57; i++)
	{
		for (b = a + 1; b < 10; b++)
		{
			putchar(a);
			putchar(b);
			if (a != 56 || b != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
