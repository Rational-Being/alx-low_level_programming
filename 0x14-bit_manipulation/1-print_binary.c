#include "main.h"

/**
 * print_binary - a function that converts binary to integers
 * @n: the int to be printed
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int temp;
	int flag = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	temp = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while (temp > 0)
	{
		if ((n & temp) != 0)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag)
			_putchar('0');

		temp >>= 1;
	}
}
