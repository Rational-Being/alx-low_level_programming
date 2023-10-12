#include "lists.h"

/**
 * free_dlistint - a funtion tath frees dlistint_ t list
 * @head: headof linked list
 * Return: noting
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = (*head).next;
		free(temp);
	}
}
