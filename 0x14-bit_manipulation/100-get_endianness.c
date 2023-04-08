#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_endianness - Function that checks the endianness
 * Return: 0 if a big endian, 1 if little endian
 */

int get_endianness(void)
{
	int check = 1;
	char *ptr = (char *)&check;

	return ((int)*ptr);
}
