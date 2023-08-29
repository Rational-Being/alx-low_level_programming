#include "lists.h"

/**
 * listint_len - a function that returns the number of element in a linked list
 * @h: head
 * Return: no pf elemnts
 */

size_t listint_len(const listint_t *h)
{
	size_t node;

	for (h = h, node = 0; h != NULL; node++, h = h->next)
		;

	return (node);
}
