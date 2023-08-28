#ifndef LISTS_H
#define LISTS_H

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t print_listint(const listint_t *h);
#endif /* LISTS_H */
