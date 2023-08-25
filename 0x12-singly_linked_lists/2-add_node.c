#include "lists.h"

/**
 * add_node - adds a new node to the beginnig
 * @head: head
 * @str: string
 * Return: address of head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t cha;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (cha = 0; str[cha]; cha++)
		;

	new->len = cha;
	new->next = *head;
	*head = new;

	return (*head);
}
