#include "lists.h"

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *tmp = h;

	while (tmp)
	{
		tmp = tmp->next;
		count++;
	}
	return (count);
}
