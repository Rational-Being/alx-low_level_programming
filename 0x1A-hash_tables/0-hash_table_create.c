#include "hash_tables.h"

/**
 * hash_table_create - funtion creates hash table
 * @size: The size of te array
 * Return: NULL if error, or a poiter to the hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hsh;
	unsigned long int i;

	hsh = malloc(sizeof(hsh));
	if (!hsh)
		return (NULL);

	hsh->size = size;
	hsh->array = malloc(sizeof(hash_table_t *) * size);

	if (!hsh->array)
	{
		free(hsh);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		hsh->array[i] = NULL;

	return (hsh);
}
