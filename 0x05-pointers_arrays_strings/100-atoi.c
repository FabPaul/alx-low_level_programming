#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _atoi - function that converts string to interger
 * @s: character to use
 * Return: the converted interger
 */

int _atoi(char *s)
{
	int a = 0;
	unsigned int ui = 0;
	int min = 1, is = 0;

	while (s[a])
	{
		if (s[a] == 45)
		{
			min *= -1;
		}
		while (s[a] >= 48 && s[a] <= 57)
		{
			is = 1;
			ui = (ui * 10) + (s[a] - '0');
			a++;
		}
		if (is == 1)
		{
			break;
		}
		a++;
	}
	ui *= min;
	return (ui);
}
