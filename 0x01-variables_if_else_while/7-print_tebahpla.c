#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints alphabets in reverse
 * Return: 0 (Success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)

		putchar(alpha);

	putchar('\n');

	return (0);
}
