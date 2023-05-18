#include "lists.h"

/**
 * add_dnodeint_end - Function that adds a new node at the end of a dlistint_t
 * @head: head of the list
 * @n: value of the node to be added
 * Return: The adress of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));


	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		dlistint_t *cur = *head;

		while (cur->next != NULL)
		{
			cur = cur->next;
		}
		cur->next = new_node;
		new_node->prev = cur;
	}
	return (new_node);
}
