#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *   * print_numbers - A function that prints numbers
 *     *@separator: String to be printed between numbers
 *       *@n : Number of integers passed to the function
 *         *
 *           * Return: Nothing
 *             */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	int i, total;
	total = n;
	va_start(nums, n);
	for (i = 0; i < total; i++)
	{
		printf("%d", va_arg(nums, int));
	if (separator != NULL && i < total - 1)
		printf("%s", separator);
	}
	printf("\n");
	va_end(nums);
}
