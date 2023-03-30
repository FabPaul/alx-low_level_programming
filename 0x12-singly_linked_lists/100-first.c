#include "lists.h"
#include <stdio.h>

/**
 * print -  Function that prints before main function is executed
 * Return: Output
 */

void __attribute__((constructor)) print()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
