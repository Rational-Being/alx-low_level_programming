#include <stdio.h>
#include "function_pointers.h"

/**
 *  *@size: is the number of elements in the array array
 *   *@cmp: is a pointer to the function to be used to compare values
 *    *@int_index returns: the index of the first element for which the cmp function does not return 0
 *     *If no element matches, return -1
 *      *If size <= 0, return -1
 *       */

int int_index(int *array, int size, int (*cmp)(int))
{
	int n;
	n = 0;
	while (size && n < size)
	{
	if (cmp(array[n]) != 0)
	return (n);
	n++;
	}
	return (-1);
}
