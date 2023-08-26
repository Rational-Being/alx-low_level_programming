#include "lists.h"

/**
 * print_list - funtion prints linked list
 * @h: pointer to head of list
 * Return: no of bodes
 */

size_t print_list(const list_t *h)
{
	unsigned int nodes = 0;

	while (h)
	{
		printf("[%u]", h->len);

		h = h->next;
		nodes++;
	}

	return (nodes);
}
