#include "lists.h"

/**
 * get_dnodeint_At_index - funtion get te nth node of a list
 * @head: pointer to the headof the linked list
 * @index: index to return
 * Return: the index given or Null
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int c;

	for (c = 0; head; c++, head = head->next)
		if (c == index)
			return (head);
	return (NULL);
}
