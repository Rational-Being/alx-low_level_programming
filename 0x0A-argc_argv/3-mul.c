#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * main - main function multipleies two numbers
 * @argc: argument count
 * @argv: argument value
 * Return: 1 on erroe, 0 on success
 */

int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int result = num1 * num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", result);
	}
	return (0);
}
