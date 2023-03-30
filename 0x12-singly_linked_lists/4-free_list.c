#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

/**
 * free_list - Function that frees a list_t list
 * @head: the beginning ptr of the list
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->next);
		free(head);
		head = temp;
	}
}
