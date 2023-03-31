#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Function that prints upper and lowercase alphabets
 * Return: 0 (Success)
 */

int main(void)
{
	char alphaBETS;

	for (alphaBETS = 'a'; alphaBETS <= 'z'; alphaBETS++)
	{
		putchar(alphaBETS);
	}
	for (alphaBETS = 'A'; alphaBETS <= 'Z'; alphaBETS++)
	{
		putchar(alphaBETS);
	}
	putchar('\n');
	return (0);
}
