#include "lists.h"

/**
 * free_dlistint - Function that frees a dlistint_t list
 * @head: header
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head, *next;

	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
}
