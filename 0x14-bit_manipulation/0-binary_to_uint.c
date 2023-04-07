#include "main.h"
#include <stddef.h>

/**
* binary_to_unit - function that converts binary numbers to an unsined integer
* @b: pointer to binary string
* Return: converted number (unsigned integer)
*/

unsigned int binary_to_unit(const char *b)
{
	unsigned int base_two = 1, len = 0, result;

	if (!b)
		return (0);

	while (b[len])
		len++;
	
	result = 0;

	while (len)
	{
		if (b[len - 1] != '0' && b[len - 1] != '1')
			return (0);

		if (b[len - 1] == '1')
			result += base_two;
		base_two *= 2;
		len--;
	}
	return (result);
}
