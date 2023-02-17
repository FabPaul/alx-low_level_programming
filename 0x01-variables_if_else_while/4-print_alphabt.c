#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Print's loowercase except q & e
 * Return: 0 (Success)
 */
int main(void)
{
	char alpha, e, q;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != e && alpha != q)
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
