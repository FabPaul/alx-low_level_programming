#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - Function that frees a linked list and sets head to NULL
 * @head: Beginning pointer
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *freed;

	if (head == 0)
		return;

	while (!*head)
	{
		freed = *head;
		*head = (*head)->next;
		free(freed);
	}

	*head = NULL;
}
