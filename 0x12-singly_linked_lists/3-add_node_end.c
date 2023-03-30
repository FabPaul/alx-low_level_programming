#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Function that adds a new node at the end of a list_t list
 * @head: ptr of the first num
 * @str: the string containing the numbers
 * Return: The address of the elemenet, or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	end = malloc(sizeof(list_t));

	if (end == 0)
		return (NULL);

	end->str = strdup(str);
	end->len = len;
	end->next = NULL;

	if (!*head)
	{
		*head = end;
		return (end);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = end;

	return (end);
}
