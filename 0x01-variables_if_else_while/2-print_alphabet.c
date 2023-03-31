#include <stdio.h>

/**
 * main - Function that writes alphabets in lowercase
 * Return: 0 (Success)
 */

int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		putchar(alphabets);
	}

	putchar('\n');

	return (0);
}
