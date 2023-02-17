#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * Main - Print's loowercase except q & e
 * Return: 0 (Success)
 */
int Main(void)
{
	char alpha, e, q;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
