#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an arraybofninteger
 * @min: minimum number
 * @max: maximim number
 * Return: pointer on success, NULL on failure
 */

int *array_range(int min, int max)
{
	 int *array, length, i;

	  if (min > max)
		  return (NULL);

	 length = max - min;
	 array = malloc((length + 1) * sizeof(int));
	 if (array == NULL)
		 return (NULL);

	 for (i = 0; i <= length; i++)
		 array[i] = min++;
	 return (array);
}

