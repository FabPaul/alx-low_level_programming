#include <stdio.h>

/**
 * main - Program that prints the name of the file it was compiled from
 * Return: nothing but the name of the file
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
