#include "lists.h"

/**
 * add_dnodeint_end - a funtion that adds a new node at he end of dlistint list
 * @head: head of the list
 * @n: value of the elemnt
 * Return: the address of the new elemnt or null if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *temp = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	temp = *head;

	if (temp != NULL)
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}
	else
	*head = new_node;
	new_node->prev = new_node;

	return (new_node);
}
