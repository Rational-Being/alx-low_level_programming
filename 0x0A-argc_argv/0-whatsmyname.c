#include "main.h"
#include <stdio.h>

/**
 * main - The main function prints its name
 * @argc: argument count
 * @argv: argument values
 * Return: 0 on succes
 */

int main(int argc, char *argv[])
{
	if (argc == 1)
		printf("%s\n", argv[0]);
	return (0);
}
