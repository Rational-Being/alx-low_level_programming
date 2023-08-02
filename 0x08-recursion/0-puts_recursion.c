#include "main.h"

void _puts_recursion(car *s)
{
	if (*s)
	{
		_putchar(*s)
		_puts_recursion (s +1)
	}
	else
	_putchar('\n')	
}
