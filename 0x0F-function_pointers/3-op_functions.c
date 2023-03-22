#include "3-calc.h"
#include <stdio.h>
#include "function_pointers.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - function that returns the sum of 2 ints
 * @a: first int
 * @b: second int
 * Return: result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that returns the difference between 2 ints
 * @a: first int
 * @b: second int
 * Return: result
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Funtions that retunrs 2 multiplied ints
 * @a: first int
 * @b: second int
 * Return: result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that returns the division of 2 ints
 * @a: first int 
 * @b: second int
 * Return: result
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function that returns the remainder of 2 numbers after being divided
 * @a: first int
 * @b: second int
 * Return: result
 */

int op_mod(int a, int b)
{
	return (a % b);
}
