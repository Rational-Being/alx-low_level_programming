#include <stdio.h>
#define PRINT_NAME_OF_FILE printf("%s\n", __FILE__)

/*
 * main: A function that prints file name
 * Return: 0 on success
 */

int main(void)
{
	PRINT_NAME_OF_FILE;
	return (0);
}
