#include "lists.h"

/**
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h;
	size_t node = 0;
	listint_t *temp;

	while (current != NULL)
	{
		node++;
		temp = current;
		current = current->next;
		free(temp);

		if (temp < current)
			break;
	}
	*h = NULL;

	return (node);
}
