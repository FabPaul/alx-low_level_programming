#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_list - FUnction that prints all elelments of a list_t list
 * @h: Pointer to the list_t list
 * Return: Elements
 */

size_t print_list(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;

		size++;
	}

	return (size);
}
