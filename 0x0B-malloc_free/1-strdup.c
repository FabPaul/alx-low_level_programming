#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Function that returns pointer to a newly allocated space in memory
 * @str: The string
 * Return: NULL if str = NULL and pointer otherwise
 */

char *_strdup(char *str)
{
	int d = 0, i = 1;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i])
	{
		i++;
	}

	s = malloc((sizeof(char) * i) + 1);

	if (s == NULL)
	{
		return (NULL);
	}

	while (d < i)
	{
		s[d] = str[d];
		d++;
	}

	s[d] = '\0';
	return (s);
}
