#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - funtion creates 2d array with malloc
 * @width: integer width
 * @height: integer height
 * Return: returns array pointer
 */

int **alloc_grid(int width, int height)
{
	int **array, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(height * sizeof(*array));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		array[i] = (int *)malloc(width * sizeof(**array));
		if (array[i] == NULL)
			return (NULL);
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			array[i][j] = 0;

	return (array);
}
