#include <unistd.h>

/**
* _putchar - prints c 
* @c: charcrater to be printed
* Return: one on success and -1 on error
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
