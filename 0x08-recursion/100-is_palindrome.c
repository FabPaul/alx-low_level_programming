#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - String length
 * @s: the string in question
 * Return: String length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}


/**
 * compare - to compare the characters of a string
 * @s: the string in question
 * @c1: the smallest character
 * @c2: the biggest number
 * Return: nothing yet, just compare
 */

int compare(char *s, int c1, int c2)
{
	if (*(s + c1) == *(s + c2))
	{
		if ((c1 == c2) || (c1 == c2 + 1))
			return (1);
		return (0 + compare(s, c1 + 1, c2 - 1));
	}
	return (0);
}


/**
 * is_palindrome - A function that prints palindrome
 * @s: the string to check for palindrome
 * Return: 1 if palindrome and 0 otherwise
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare(s, 0, _strlen_recursion(s) - 1));
}
