#include "main.h"

/**
* set_bit - ssets a bit of an index to 1
* @n: no. pointer to bit integer
* @index: inde of bit
* Return: 1 on success, -1 on error
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a = 1;

	a <<= index;
	if (a == 0)
		return (-1);
	*n |= a;
	return (1);
}
