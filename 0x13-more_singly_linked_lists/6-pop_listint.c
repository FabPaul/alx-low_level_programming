#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - Function that deletes the head node and returns it's data
 * @head: The node to be reassigned to the second value of the list
 * Return: Head's node data or 0 if failure
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
	temp = *head;
	n = temp->n;
	(*head) = (*head)->next;
	free(temp);
	}

	return (n);
}
