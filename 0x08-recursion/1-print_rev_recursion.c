#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: the input string
 * Return: returns nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
	_putchar('\n');
}
