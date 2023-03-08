#include "main.h"
#include <stdio.h>

/**
 * factorial - A string that prints thefactorialof a number
 * @n: The given factorial
 * Return: Factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
