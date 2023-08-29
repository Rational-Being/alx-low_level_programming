#include "lists.h"

/**
 * reverse_listint - function reverses linked list
 * @head: pointer to head
 * Return: pointer to the first node of a reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = NULL;
	listint_t *before = NULL;

	if (*head == NULL)
		return (NULL);

	while (before != NULL)
	{
		current = (*head)->next;
		(*head)->next = before;
		before = *head;
		*head = current;
	}

	(*head)->next = before;
	return (*head);
}
