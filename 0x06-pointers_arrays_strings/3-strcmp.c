#include "main.h"
#include <stdio.h>

/**
 * _strcmp - A function that compares 2 strings
 * @s1: The first string to compare
 * @s2: The second string to sompare
 * Return: pointer that compares 2 strings
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
