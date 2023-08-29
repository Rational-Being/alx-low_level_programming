#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at a particular index
 * @head: head pointer
 * @index: index of node
 * Return: 1 on success, -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int node;
	listint_t *temp, *del;

	node = 0;
	temp = *head;
	if (temp == NULL)
		return (-1);

	while (node < index)
	{
		node++;
		del = temp;
		if (temp->next)
			temp = temp->next;
		else
			return (-1);
	}

	if (index == 0)
		*head = temp->next;
	else if (temp->next)
		del->next = temp->next;
	else
		del->next = NULL;

	free(temp);
	return (1);
}
