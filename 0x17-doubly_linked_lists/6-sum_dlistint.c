#include "lists.h"

/**
 * sum_dlistint - funtion counts all the lements in the list
 * @head: head of list
 * Return: the sum of the n valu of each node
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *temp = NULL;

	temp = head;
	for (sum = 0; temp; temp = temp->next)
		sum = sum + temp->n;
	return (sum);
}
