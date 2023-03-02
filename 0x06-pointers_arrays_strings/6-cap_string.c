#include "main.h"
#include <string.h>

/**
 * *cap_string - Function that capitalises words include special chars
 * @str: String to change to uppercase
 * Return: Uppercase string
 */

char *cap_string(char *str)
{
	int i = 0, d = 'a' - 'A';

	while (str[i])
	{
		while (!(str[i] >= 'a') && (str[i] <= 'z'))
			i++;
		if (str[i - 1] == 32 ||
				str[i - 1] == '\t' ||
				str[i - 1] == '\n' ||
				str[i - 1] == '\t' ||
				str[i - 1] == 44 ||
				str[i - 1] == 59 ||
				str[i - 1] == 46 ||
				str[i - 1] == 33 ||
				str[i - 1] == 63 ||
				str[i - 1] == 34 ||
				str[i - 1] == 40 ||
				str[i - 1] == 41 ||
				str[i - 1] == 123 ||
				str[i - 1] == 125 ||
				i == 0)
			str[i] -= d;
		i++;
	}
	return (str);
}
