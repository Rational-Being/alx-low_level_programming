#include "search_algos.h"

/**
 * linear_search - a funtion that searches for a value oin an array of integer
 * @array: array passed
 * @size: size of te array
 * @value: value to search for
 * Return: first index were value os located otherwise -1 for value not exist
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int i = 0;

	if (!array || size == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("VAlue checked array[%d] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
