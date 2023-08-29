#include "lists.h"

/**
 * sum_listint - a function that sums value form listint_t
 * @head: pointer ot head
 * Return: the sum of all the adata n form list
 */

int sum_listint(listint_t *head)
{
	int add;

	for (add = 0, head = head; head != NULL; head = head->next)
		add += head->n;

	return (add);
}
