#include <stdio.h>
#include "main.h"

/**
 * string_toupper - Function that converts lowercase to uppercase
 * @str: String to change to uppercase
 * Return: A string of Uppercase characters
 */

char *string_toupper(char *str)
{
	int i = 0, d = 'a' - 'A';

	while (str[i])
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
			str[i] -= d;
	       i++;
	}
	return (str);
}
