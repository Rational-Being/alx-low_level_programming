#include "main.h"

/**
 * flip_bits - a funtion that returns the number of bits to flip to
 * get from one number to another
 * @n: number of flip bits needed
 * @m: number to set other
 * Return: number of fliped bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	unsigned long int rem = n ^ m;

	for (i = 0; rem; i++)
		rem = rem & (rem - 1);

	return (i);
}
