#include <stdio.h>
#include "main.h"

/**
 *   *This program prints the name of the file it was compiled from, followed by a new line
 *     *Return: 0
 *       */

int main(void)
{
		char file[] = __FILE__;
		int count = 0;
		while (count < 80)
		{
		if (file[count] == '\0')
		{
		_putchar('\n');
		break;
		}
		else
		{
		_putchar(file[count]);
		count++;
		}
		}
		return (0);
}
