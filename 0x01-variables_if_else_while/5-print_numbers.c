#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints single base 10 digits
 * Return: 0 (Success)
 */
int main(void)
{
	int b10;

	for (b10 = 0; b10 < 10; b10++)
	{
		printf("%b", b10);
	}
	printf('\n');
	return (0);
}
