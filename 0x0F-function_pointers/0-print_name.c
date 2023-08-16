#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - a function that pronts a name
 * @name: name of fucntion to beprinted
 * @f: fucntion passed as parameter
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
