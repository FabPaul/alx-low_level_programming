#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Function that inserts a new node at a given pos
 * @head: pointer of the first element
 * @idx: the index of thelist where the new node should be added
 * @n: Data in each node
 * Return: The address of the node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *temp;
	unsigned int i;

	newnode = malloc(sizeof(listint_t));

	if (newnode == 0)
		return (NULL);

	newnode->n = n;

	if (idx ==0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	temp = *head;

	for (i = 0; i < idx-1 && temp != NULL; i++)
	{
		temp = temp->next;
	}

	if (temp == NULL)
	{
		free(newnode);
	return (newnode);
	}

	newnode->next = temp->next;
	temp->next = newnode;

	return (newnode);
}
