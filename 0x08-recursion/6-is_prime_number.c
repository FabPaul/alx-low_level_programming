#include "main.h"
#include <stdio.h>

int verify_prime(int n, int i);

/**
 * is_prime_number - Function that prints 1 if prime and 0 otherwise
 * @n: the number to check
 * Return: 1 if prime, 0 if not
 */


int is_prime_number(int n)
{
	return (verify_prime(n, 1));
}

/**
 * verify_prime - Function that verifies if a number is prime or not
 * @n: checked number
 * @i: iterate
 * Return: 1 if prime, 0 otherwise
 */

int verify_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if ((n % i == 0) && (i > 1))
		return (0);
	if ((n / i) < i)
		return (1);
	return (verify_prime(n, i + 1));
}
