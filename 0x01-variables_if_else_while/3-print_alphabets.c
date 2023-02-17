#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints ALHPabet
 * Return: 0 (Success)
 */
int main(void)
{
	char alPH;

	for (alPH = 'a'; alPH <= 'z'; alPH++)
	{
		putchar(alPH);
	}
	for (alPH = 'A'; alPH <= 'Z'; alPH++)
	{
		putchar(alPH);
	}
	putchar('\n');
	return (0);
}
