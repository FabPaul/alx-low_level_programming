#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Function that concatenates 2 strings
 * @s1: First pointer
 * @s2: Second pointer
 * Return: Concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int j = 0, i = 0, q = 0, w = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[j])
		j++;
	while (s2[i])
		i++;

	w = j + i;

	s = malloc((sizeof(char) * w) + 1);

	if (s == NULL)
		return (NULL);
	i = 0;

	while (q < w)
	{
		if (q <= j)
			s[q] = s1[q];
		if (q >= j)
		{
			s[q] = s2[i];
			i++;
		}
		q++;
	}
	s[q] = '\0';
	return (s);
}
