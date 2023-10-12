#include "lists.h"

/**
 * add_dnodeint - a funtion that add a new node at the beggining ofa list
 * @head: head of the list
 * @n: value of the elemnt
 * Return: returns the address of the new element
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	if (temp == NULL)
		new->next = NULL;
	else
	{
		while (temp->prev)
			temp = temp->prev;

		temp->prev = new;
		new->next = temp;
	}
	*head = new;
	return (*head);
}
