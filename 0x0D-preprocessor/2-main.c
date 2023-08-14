#include <stdio.h>

#define PRINT_NAME_OF_FILE printf("%s\n", __FILE__)
/*
 * main - a function that prints file name
 */

int main(void)
{
	PRINT_NAME_OF_FILE;
	return (0);
}
