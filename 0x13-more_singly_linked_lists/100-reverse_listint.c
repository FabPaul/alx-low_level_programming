#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * reverse_listint - Function that reverses a listint_t linked list
 * @head: The pointer to the first pointer
 * Return: A pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevnode, *temp,*nextnode;

	prevnode = 0;

	temp = nextnode = *head;

	while (temp != 0)
	{
		nextnode = nextnode->next;
		temp->next = prevnode;
		prevnode = temp;
		temp = nextnode;
	}

	*head = prevnode;

	return(*head);
}
