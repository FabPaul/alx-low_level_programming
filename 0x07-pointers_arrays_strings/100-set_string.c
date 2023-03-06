#include "main.h"
#include <stdio.h>

/**
 * set_string - function that sets the value of a pointer to char
 * @s: the pointer to do pointer to pointer
 * @to: the pointer
 * Return: pointer to pointer
 */

void set_string(char **s, char *to)
{
	*s = to;
}
