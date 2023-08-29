#include "lists.h"

/**
 * free_listint - a function that fress a linked list
 * @heead: pointer to head
 * Return: noting
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	for (; head != NULL; head = head->next)
	{
		temp = head;
		free(temp);
	}
}
