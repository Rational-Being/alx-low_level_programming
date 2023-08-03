#include "main.h"

int div_num(int num, int divisor)
{
	if (divisor == 1)
		return 0;
	else if (num % divisor ==0)
			return 1;
	else
		return div_num(num, divisor - 1);
}

int is_prime_number(int n)
{	if (n <= 1)
		return 0;
	else
		return !div_num(n, n-1);
}
