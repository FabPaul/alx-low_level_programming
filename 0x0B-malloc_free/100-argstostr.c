#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Function that concatenate 2 programs
 * @ac: first program
 * @av: second program
 * Return: Concatenated program
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, length;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			length++;
		}

		length++;
	}

	s = malloc((length + 1 ) * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			s[k] = av[i][j];
			k++;
		}
		s[k] = '\n';
		k++;
	}

	return (s);
}
