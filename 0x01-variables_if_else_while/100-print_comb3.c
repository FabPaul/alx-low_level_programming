#include <stdio.h>

/**
 * main - A program that prints the combination of 2 numbers
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a < 9; a++)
	{
		for (b = a + 1; b < 10; b++)
		{
			putchar(a);
			putchar(b);
			if (a != 56 || b != 57)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
