#include <stdlib.h>
#include "main.h"

/**
 *  * function that allocates memory for an array with malloc
 *   * @size1: input size 1
 *    * @size: input size bytes
 *     * Return: nothing
 *      */

void *_calloc(unsigned int size1, unsigned int size)
{
		void *cal;

			if (size1 == 0 || size == 0)
						return (NULL);
				cal = malloc(size1 * size);
					if (cal == NULL)
								return (NULL);
						_memset(cal, 0, size1 * size);
							return (cal);
}
/**
 *  * _memset - function that fills memory with a constant byte.
 *   *
 *    * @mem: mamory area to return
 *     * @byt: constant byte
 *      * @n: size of bytes
 *       * Return: char
 *        */

char *_memset(char *mem, char byt, unsigned int n)
{
		unsigned int i = 0;

			while (i < n)
					{

								*(byt + i) = b;
										i += 1;
											}
				return (s);
}
