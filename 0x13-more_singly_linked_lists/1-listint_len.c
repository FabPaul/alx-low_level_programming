#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - Function that returns the num of elements of a linked list
 * @h: Pointer to the elements
 * Return: the liinked list's length
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}
