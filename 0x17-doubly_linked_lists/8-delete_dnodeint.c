#include "lists.h"

/**
 * delete_dnodeint_at_index - funtion deltes a node at a given index
 * @head: head f the linked list
 * @index: index to insert
 * Return: retun 1 on success negative on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp = NULL, *tmp = NULL;

	temp = *head;

	if (temp != NULL)
		while (temp->prev != NULL)
			temp = temp->prev;
	while (temp != NULL)
	{
		if (i == index)
		{
		if (i == 0)
		{
			*head = temp->next;
			if (*head != NULL)
				(*head)->prev = NULL;
		}
		else
		{
			tmp->next = temp->next;
			if (temp->next != NULL)
				temp->next->prev = tmp;
		}
		free(temp);
		return (1);
	}
	tmp = temp;
	temp = tmp->next;
	i++;
	}
	return (-1);
}
