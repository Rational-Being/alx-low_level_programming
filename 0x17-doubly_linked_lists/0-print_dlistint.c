#include "lists.h"

/**
 * print_dlistint - prints all the lemnt of a dlistint list
 * @h: head of list
 * Return: count
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	for (; h; h = h->next, count++)
		printf("%d\n", h->n);
	return (count);
}
