#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Function that concatenates all args of a program
 * @ac: interger value
 * @av: char value
 * Return: concatenated values
 */

char *argstostr(int ac, char **av)
{
	int z = 0, x = 0, c = 0, v = 0;
	char *s;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	while (x < ac)
	{
		while (av[x][c])
		{
			z++;
		}

		c = 0;
		x++;
	}

	s = malloc((sizeof(char) * z) + ac + 1);

	x = 0;
	while (av[x])
	{
		while (av[x][c])
		{
			s[v] = av[x][c];
			v++;
			c++;
		}
		
		s[v] = '\n';

		c = 0;
		v++;
		x++;
	}

	v++;
	s[v] = '\0';
	return (s);
}
