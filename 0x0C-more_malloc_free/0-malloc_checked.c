#include <stdlib.h>

/*if malloc fails, the malloc_checked function should cause normal
 process termination with a status va`lue of 98
 * *Returns a pointer to the allocated memory
 * *
 * *@b integer
 * *Return: nothing
 * */

void *malloc_checked(unsigned int b)
{
	int *mllch;

	mllch = malloc(b);
	if (mllch == NULL)
	exit(98);
	else
	return (mllch);
}
