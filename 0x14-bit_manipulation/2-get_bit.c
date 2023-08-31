#include "main.h"

/**
 * get_bit - a funtion that returns the value of a bit at a given index
 * @n: number to get
 * @index: idex to get
 * Return: 1 on success, 0 on failure
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int temp;

	if (index > 64)
		return (-1);

	temp = n >> index;

	return (temp & 1);
}
