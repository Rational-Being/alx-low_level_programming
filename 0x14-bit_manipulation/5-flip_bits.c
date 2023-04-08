#include "main.h"

/**
 * flip_bits - return the no. of bits to be flipped
 * @n: Humber of flips required
 * @m: number of the other
 * Return: reurns no. of flips
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int fcount = 0;
	unsigned long int xor, a;

	xor = (n ^ m);
	a = 1;

	while (a <= xor)
	{
		if (a & xor)
			fcount++;
		a <<= 1;
	}
	return (fcount);
}
