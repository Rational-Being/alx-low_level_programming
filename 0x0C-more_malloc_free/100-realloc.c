#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function realocates mem block
 * @ptr: previously allocated memory
 * @old_size: size of allocated memeory
 * @new_size: size of memory to be allocated
 * Return: pointer to new memeory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_memory, *old_memory;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	new_memory = malloc(new_size);
	old_memory = ptr;

	if (old_size > new_size)
		old_size = new_size;

	for (i = 0; i < old_size; i++)
		new_memory[i] = old_memory[i];

	free(ptr);
	return (new_memory);
}

