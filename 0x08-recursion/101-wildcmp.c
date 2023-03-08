#include "main.h"
#include <stdio.h>

/**
 * wildcmp - comppare 2 strings and 1 if identical, o otherwise
 * @s1: First string
 * @s2: Second string, which maay contain * as special char
 * Return: 1 if strings are identical and 0 if otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
		return (0);

	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	return (0);
}
