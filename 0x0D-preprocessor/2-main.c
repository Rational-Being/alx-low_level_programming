#include <stdio.h>

#define PRINT_NAME_OF_FILE printf("%s\n", __FILE__);

int main(void)
{
	PRINT_NAME_OF_FILE;
	return (0);
}
