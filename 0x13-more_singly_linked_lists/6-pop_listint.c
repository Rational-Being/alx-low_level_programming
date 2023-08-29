#include "lists.h"

/**
 * pop_listint - funtion that deleltes the end of a node
 * @head: double pointer to head
 * Return: head nodes data 'n'
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *new;

	if (*head == NULL)
		return (0);

	new = *head;
	n = new->n;
	*head = new->next;
	free(new);

	return (n);
}
