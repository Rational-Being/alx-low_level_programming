#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *   * sum_them_all - returns the sum of all its parameters
 *     * @n: Number of  parameters
 *       * Return: sum of parameters
 *         */

int sum_them_all(const unsigned int n, ...)
{
/*
		 * 	*checks if first argument is 0 and returns 0
		 * 		   */
	if (n == 0)
	{
		return (0);
	}
	else
	{
		va_list nums;
		int i;
		int sum = 0;
		int total = n;
		va_start(nums, n);
		for (i = 0; i < total; i++)
	{
	sum += va_arg(nums, int);
	}
		va_end(nums);
		return (sum);
	}
}
