#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Function that deletes a node at index of a list
 * @head: Pointer to point the start of the list
 * @index: Index of the node that should be deleted
 * Return: 1 if success, -1 if it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *oldnode;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	for (i = 0; i < index && temp != NULL; i++)
	{
		oldnode = temp;
		temp = temp->next;
	}

	if (temp == NULL)
		return (-1);

	oldnode->next = temp->next;
	free(temp);

	return (1);
}
