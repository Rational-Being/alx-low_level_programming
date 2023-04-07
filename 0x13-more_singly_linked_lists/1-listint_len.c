#include <stdio.h>
#include "lists.h"

/**
* listint_len: funtioon returns the number of elements in the list
* @h: pointer to struct listint_t
* Return: no. of elements
*/
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h-> next;
		nodes++;
	}
	return (nodes);
}
