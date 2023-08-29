#include "lists.h"

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *prev;
	listint_t *current;

	prev = head;
	current = head;

	while (prev && current && current->next)
	{
		prev = prev->next;
		current = current->next->next;
		if (prev == current)
			return (prev);

	}

		return (NULL);
}
