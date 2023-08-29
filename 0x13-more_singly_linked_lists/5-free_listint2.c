#include "lists.h"

/**
 * free-listint2 - funtion tha tfrees listint_t list
 * @head : pointer to head
 * Retun: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;
	for (; *head != NULL; *head = (*head)->next)
	{
		current = *head;
		free(current);
	}
}
