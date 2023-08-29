#include "lists.h"

/**
 * add_nodeint - addds a new node ot the beginning of a list
 * @head: double pointer ot head
 * @n: ineger
 * Return: Returns an address on success, NULLon failure
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = *head;
	*head = malloc(sizeof(listint_t));
	if (head == NULL)
		return (NULL);
	(*head)->n = n;
	(*head)->next = new_node;
	return (*head);
}
