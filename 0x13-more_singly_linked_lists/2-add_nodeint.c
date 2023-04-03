#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - Function that adds a new node at the start of a linked list
 * @head: Pointer to poin the starting address of the list
 * @n: Number of elements on the list
 * Return: Address of the elements or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	if (newnode == 0)
		return (NULL);

	newnode->n = n;
	newnode->next = (*head);
	(*head) = newnode;

	return (newnode);
}
