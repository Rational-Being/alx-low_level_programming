#include "lists.h"

/**
 * list_len - returns the no of elements ina a list
 * @h: singly linled list
 * Return: number of elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t no_nodes;

	no_nodes = 0;
	while (h != NULL)
	{
		h = h->next;
		no_nodes++;
	}
	return (no_nodes);
}
