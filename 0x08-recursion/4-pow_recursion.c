#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - Function that returns the vale of
 * x raised to the power of y
 * @x: the value to use
 * @y: the power to use
 * Return: A vaue raised to the power ofanother
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
