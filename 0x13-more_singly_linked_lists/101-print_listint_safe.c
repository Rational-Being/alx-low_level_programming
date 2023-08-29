#include "lists.h"

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *prev, *current;
	size_t n_node = 0;
	size_t loop = 0;

	prev = head;
	current = head;

	while (prev && current && current->next)
	{
		printf("[%p] %d\n", (void *)prev, prev->n);
		n_node++;

		prev = prev->next;
		current = current->next->next;

		if (prev == current)
		{
			printf("-> [%p] %d\n", (void *)prev, prev->n);
			loop = 1;
			break;
		}
	}

	if (loop)
	{
		prev = head;
		while (prev != current)
		{
			printf("[%p] %d\n", (void *)prev, prev->n);
			n_node++;
			prev = prev->next;
			current = current->next;
		}
	}

	return (n_node);
}
