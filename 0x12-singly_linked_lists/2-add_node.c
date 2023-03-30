#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Function that adds a new node tat the beginning of a list
 * @head: Ptr to containing the starting address of the first num on the list
 * @str: The string of num on the list
 * Return: Address or the element or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_num;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_num = malloc(sizeof(list_t));

	if (new_num == 0)
		return (NULL);

	new_num->str = strdup(str);
	new_num->len = len;
	new_num->next = (*head);
	(*head) = new_num;

	return (*head);
}
