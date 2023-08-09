#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars
 * , and initializes it with a specific char
 * @size: size of the array
 * @c: a char to print
 * Return: returns pointer to the array or Null if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *b;

	b = malloc(size * sizeof(char));

	if (b == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);
	while (i < size)
	{
		b[i] = c;
		i++;
	}
	return (b);
}
