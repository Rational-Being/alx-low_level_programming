#include "main.h"

/**
 * get_ensianess - funtion that checks endianess
 * Return: 0 if big endian 1 if little endian
 */

int get_endianness(void)
{
	unsigned int num = 1;
	char *byte = (char *)&num;

	return ((int)*byte);
}
