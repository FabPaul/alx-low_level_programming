#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - A function that returns string length
 * @str: the string to check
 * Return: null
 */

int _strlen(char *str)
{
	int length = 0;

	while (*str++)
		length++;
	return (length);
}
