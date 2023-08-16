#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - of another function to iterate through the array passed
 * @array: array passed
 * @size: size of the array
 * @action: pointer to the function needed
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
