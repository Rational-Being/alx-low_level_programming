#include "lists.h"

/**
 * dlistint_len - funtion returns thenumber of eemnts ina linked list
 * @h: head o fthe list
 * Return: rerun the count of te elemnts
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *tmp = h;

	while (tmp)
	{
		tmp = tmp->next;
		count++;
	}
	return (count);
}
