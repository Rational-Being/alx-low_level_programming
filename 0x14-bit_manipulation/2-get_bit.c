#include "main.h"

/**
* get_bit: gets and returns a bit at an index
* @n: value of index to get
* @index: where the bit is gotten
* Return: value of bit, -1 if error
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int a = 1;

	if (a == 0 && index < 64)
		return (0);

	for (a = 0; a <= 63; n >>= 1, a++)
	{
		if (index == a)
			return (a & 1);
	}
	return (-1);
}
