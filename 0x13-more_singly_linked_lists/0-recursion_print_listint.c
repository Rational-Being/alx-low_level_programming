#inlcude <stdio.h>
#include "lists.h"

/**
* Recursion_Printer: a function that print al the eements int he list
* @h: pointer toi listint structure
* Return: program reuturns the no. of nodes
*/

size_t recursion_printer(const listint_t *h)
{
	printf("%d\n" h->n);
	return (1 + recursion_printer(h->next));
}
