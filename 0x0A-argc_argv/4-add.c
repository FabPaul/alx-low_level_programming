#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * check_num - check string for digit numbers
 * @str: string array
 * Return: 0 (success)
 */

int check_num(char *str)
{
	unsigned int check;

	check = 0;
	while (check < strlen(str))
	{
		if (!isdigit(str[check]))
		{
			return (0);
		}
		check++;
	}
	return (1);
}

/**
 * main - program that adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int check, str_to_int, sum = 0;

	check = 1;
	while (check < argc)
	{
		if (check_num(argv[check]))
		{
			str_to_int = atoi(argv[check]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		check++;
	}
	printf("%d\n", sum);

	return (0);
}
