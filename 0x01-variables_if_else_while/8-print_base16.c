#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - lowercase base 16
 * Return: 0 (Success)
 */
int main(void)
{
	int b16;
	char alpha;

	for (b16 = 0; b16 < 10; b16++)
		putchar((b16 % 10) + '0');

	for (alpha = 'a'; alpha <= 'f'; alpha++)
		putchar(alpha);

	putchar('\n');

	return (0);
}
