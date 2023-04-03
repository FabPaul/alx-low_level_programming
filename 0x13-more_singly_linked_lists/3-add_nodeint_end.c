#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - Function that adds a new node at the end of a linked list
 * @head: Starting address of the list
 * @n: Number of elements on the list
 * Return: The address of the elements or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *temp;

	newnode = malloc(sizeof(listint_t));

	if (newnode == 0)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	temp = *head;

	while (temp->next)
		temp = temp->next;
	
	temp->next = newnode;

	return (newnode);
}
