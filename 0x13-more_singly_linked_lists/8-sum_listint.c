#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - Function that returns the sum of all data of a linked list
 * @head: The pointer to the starting address of the list
 * Return: 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
