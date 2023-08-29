#include "lists.h"

/**
 * add_nodeint_end - a funtion that add a new nod eot end of a singy linked lsit
 * @head: a doublepointer to head that point to list structure
 * @n: integer
 * Return: return the address of new elemen on succces and Null on failure
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = *head;
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));


	if (new_node == NULL)
		return (NULL);
	else
	{
		new_node->n = n;
		new_node->next = NULL;
	}

	new_node->n = n;

	if (*head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = NULL;
		temp = *head;
		while (temp && temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}

	return(new_node);
}
