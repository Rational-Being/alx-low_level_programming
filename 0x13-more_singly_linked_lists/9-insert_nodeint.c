#include "lists.h"

/**
 * insert_nodeint_at_index - a funtion that inserts node at given index
 * @head: a pointer ot listint_t structurre
 * @idx: the index of the list
 * @n: An integer data for new node
 * Return: the address to new node, NULL on failure
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	unsigned int node;
	listint_t *temp;

	if (head == NULL)
		return (NULL);

	temp = *head;
	while (node < idx)
	{
		temp = temp->next;
		node++;
	}

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = n;

	if (idx == 0)
	{
		*head = new;
		new->next = temp;
	}
	else if (temp->next)
	{
		new->next = temp->next;
		temp->next = new;
	}
	else
	{
		new->next = NULL;
		temp->next = new;
	}

	return (new);
}

