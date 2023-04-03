#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - function that frees a linked list
 * @head: The starting pointer of the list
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = (head->next);
		free(head);
		head = next;
	}
}
