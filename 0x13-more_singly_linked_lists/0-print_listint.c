#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_listint - Function that prints all the elements of a listint_t list
 * @h: The pointer to the listint_t list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t size = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;

		size++;
	}

	return (size);
}
