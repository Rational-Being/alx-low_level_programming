#include <stdio.h>
#include "lists.h"

/**
* print_listint: Funtion print_listint prints all the elements in the list
* @h: is a pointer to listint structure
* Return: program returns the number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n"  h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
