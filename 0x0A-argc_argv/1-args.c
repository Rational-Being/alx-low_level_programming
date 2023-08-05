#include "main.h"
#include <stdio.h>

/**
 * main - The mainf ufnction prints the number of command line arguments
 * @argc: argument count
 * @argv: argument values
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);
	return (0);
}
