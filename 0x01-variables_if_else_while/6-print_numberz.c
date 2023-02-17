#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints base 10 single digits
 * Return: 0 (Success)
 */
int main(void)
{
	int b10;

		for (b10 = 0; b10 < 10; b10++)
			putchar((b10 % 10) + '0');

	putchar('\n');

	return (0);
}
