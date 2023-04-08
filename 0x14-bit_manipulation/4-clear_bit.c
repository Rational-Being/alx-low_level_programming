#include "main.h"

/**
* clear_bit: sets a bit to 0 at a given index
* @n: pointer to set bit
* @index: index where the bit is gotten 
* Return: 1 on success, -1 on errror
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a = 1;

	a = ~(a << index);
	if (a == 1)
		return (-1);
	*n &= a;
	return (1);
}
