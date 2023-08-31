#include "main.h"

/**
 * clear_bit - a funtion that sets a bit to 0 at a given index
 * @n: the no bit is set to
 * @index: index of set bit
 * Return: 1 on success, -1 on error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 0001;

	i <<= index;
	if (i == 0)
		return (-1);
	*n &= i;
	return (1);
}
