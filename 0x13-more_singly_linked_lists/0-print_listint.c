#include "lists.h"

/**
 * print_listint - print elements of a linked list
 * @h: linked list head
 * Retun: nodescount
 */

size_t print_listint(const listint_t *h)
{
	size_t node;

	for (h = h, node = 0; h != NULL; node++, h = h->next)
		printf("%d\n", h->n);

	return (node);
}
