#include <stdio.h>

/**
 * bf_main - func runs before main
 * Return: noting
 */

void __attribute__((constructor)) bf_main(void)
{
	printf("You're beat! and yet, you must allow,\n");

	printf("I bore my house upon my back\n");
}
