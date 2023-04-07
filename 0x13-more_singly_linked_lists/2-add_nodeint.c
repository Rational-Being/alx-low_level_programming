#include <stdio.h>
#include "lists.h"

/**
* add_nodeint: function that adds a new nod at the befining of a list
* @head: point to struct list_t
* @n: data to be assigned to new node
* Return: the adress of the new elemnt, or Null on failure
*/

listint_t* add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = * head;
	*head = malloc(sizeof(listint_t));
	if (!*head)
		return (NULL);
	(*head)->n = n;
	(*head)->next = new_node;
	return (*head);
}
