#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function allocates memory for array
 * @nmemb: no. of elements
 * @size: array size
 * Return: pointer on success, null ion fialure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *cp;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	cp = malloc(nmemb * size);
	if (cp == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		*(cp + i) = 0;
	return (cp);
}
