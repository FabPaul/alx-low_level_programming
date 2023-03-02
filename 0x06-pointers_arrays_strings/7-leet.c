#include "main.h"
#include <string.h>

/**
 * leet - Function that encodes a sttring to 1337
 * @a: character to use
 * Return: the value of a
 */

char *leet(char *a)
{
	int i, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; a[i] != '\0'; i++)
	{       
		for (j = 0; j < 10; j++)
		{
			if (a[i] == s1[j])
			{
				a[i] = s2[j];
			}
		}
	}
	return (a);
}
