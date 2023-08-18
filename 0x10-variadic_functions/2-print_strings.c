#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function prints strings
 * @separator: string passed
 * @n: no of strings passed
 * @...: variadic variable
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *string;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(str, char*);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (separator == NULL)
			continue;
		if (i < (n - 1))
			printf("%s", separator);
	}

	printf("\n");

	va_end(str);
}
