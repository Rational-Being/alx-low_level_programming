#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocating memory using malloc
 * @b: an unsigned integer
 * Return: returns a pointer pr null on failure
 */

void *malloc_checked(unsigned int b)
{
	void *a = malloc(b);

	if (a == NULL)
		exit(98);

	return (a);
}
