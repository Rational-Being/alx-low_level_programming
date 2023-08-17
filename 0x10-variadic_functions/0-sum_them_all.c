#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - a function that sums all the paramwters passed to it
 * @n: number of parameters
 * @...: variable arguments
 * Return: sum of all the argumets
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(args, n);

	i = 0;
	while (i < n)
	{
		sum  = sum + va_arg(args, int);
			i++;
	}

	va_end(args);
	return (sum);
}
