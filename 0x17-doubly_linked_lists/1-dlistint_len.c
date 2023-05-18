#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * dlistint_len - Function that prints number of elements in a dlistint list
 * @h: header
 * Return: length of the linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return num;
}
