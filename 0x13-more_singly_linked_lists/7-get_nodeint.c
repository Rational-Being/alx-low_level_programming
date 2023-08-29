#include "lists.h"

/**
 * get_nodeint_at_index - a funtion that gets a node ina linked list
 * @head: pointer to head
 * @index: given node
 * Return: pointer ot node on success, null on failure
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i;

	for (i = 0; (i < index) && (head->next); i++)
		head = head->next;

	if (head)
		return (head);
	else
		return (NULL);
}
