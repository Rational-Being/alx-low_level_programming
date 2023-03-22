#include <stdio.h>
#include "function_pointers.h"

/**
 *  *array_iterator- Function that executes a parameter on an array
 *   *@size : size of array
 *    *@action : a pointer to function that is used
 *     *@arrf : Array function
 *      */

void array_iterator(int *arrf, size_t size, void (*action)(int))
{
	size_t n;
	n = 0;
	while (n < size)
	{
		action(arrf[n]);
		n++;
	}
}
