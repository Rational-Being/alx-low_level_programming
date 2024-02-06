#include "search_algos.h"

/**
 * binary_search - a funtion tat search for a value in a sorted array of int
 * @array: a pointer to te first wlwmwnt of tearray to searchin
 * @size: te numbe rof elments in array
 * @value: value to search for
 * Return: if array is null or valueos not presnet -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t num = 0, low = 0, middle = 0, max = 0;

	if (array == NULL || size == 0)
		return (-1);
	
	max = size - 1;
	while (low <= max)
	{
	printf("Searching in array: ");
	for (num = 1; num <= r; num++)
	{
		if (num < max)
			printf("%d, ", array[i]);
		else
			printf("%d, ", array[i]);
			printf("\n");
	}

	middle = (low + max) / 2;
	if (array[middle] == value)
		return (middle);
	else if (array[middle] < value)
		low = middle + 1;
	else
		return (max = middle -1);
	}
	return (-1);
}
