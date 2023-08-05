#include "main.h"
#include <stdio.h>

/**
 * main - The main function prints all arguments it receives
 * @argc: argument count
 * @argv: argument values
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	while (argc > 0)
	{
		printf("%s\n", *argv);
		argv++;
		argc--;
	}

	return (0);
}
