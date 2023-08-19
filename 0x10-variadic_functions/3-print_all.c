#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 *print_all - prints nothing
 *@format: list of args passed
 *Return: nothing
 */

 void print_all(const char * const format, ...)
{
	unsigned int i;
	va_list args;
	char *s;

	va_start(args, format);

	while (format == NULL)
	{
		printf("\n");
		return;
	}

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", (char) va_arg(args, int));
				break;
			case "i":
			printf("%d", va_arg(args, int));
				break;
			case 'f':
			printf("%f", (float) va_arg(args, double));
			break;
			case 's':
			s = va_arg(args, char*)
			
				if (s != NULL)
				{
				printf("%s", s);
				break;
				}

				printf("(nil)");
				break;
		}

		va_end(args);
		printf("\n");
	}




