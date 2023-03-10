#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _atoi - Program that multiplies 2 numbers
 * @s: string to use
 * Return: 0 (Success)
 */

int _atoi(char *s)
{
	int a = 0, z = 0, d = 0, len = 0, f = 0, dig = 0;

	while (s[len] != '\0')
		len++;
	while ((a < len) && (f == 0))
	{
		if (s[a] == '-')
			++z;
		if ((s[a] >= '0') && (s[a] <= '9'))
		{
			dig = s[a] - '0';
			if (z % 2)
				dig = -dig;
			d = d * 10 + dig;
			f = 1;
			if ((s[a + 1] < '0') || (s[a + 1] > '9'))
				break;
			f = 0;
		}
		a++;
	}
	if (f == 0)
		return (0);
	return (d);
}

/**
 * main - A program that multiplies 2 numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int score, n1, n2;

	if ((argc < 3) || (argc > 3))
	{
		printf("Error\n");
		return (1);
	}

	n1 = _atoi(argv[1]);
	n2 = _atoi(argv[2]);
	score = n1 * n2;

	printf("%d\n", score);
	return (0);
}
