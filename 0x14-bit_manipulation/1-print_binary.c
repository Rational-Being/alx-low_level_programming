#include "main.h"

/**
* print_binary: prints the binary representation without % or /
* @n: integer to be printed
* Return: no return
* variables prnt and larg i.e largest stores some needed values
*/

void print_binary(unsigned long int n)
{
	unsigned int prnt = 0, larg;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	larg = 32768;
	while (larg)
	{
		if (prnt == 1 && (n & larg) == 0)
			_putchar('0');
		else if ((n & larg) != 0)
		{
			_putchar('1');
			prnt = 1;
		}
		larg >>= 1;
	}
}
