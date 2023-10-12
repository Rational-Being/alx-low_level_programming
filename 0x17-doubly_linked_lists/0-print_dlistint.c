#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	for (; h; h = h->next, count++)
		printf("%d\n", h->n);
	return (count);
}
