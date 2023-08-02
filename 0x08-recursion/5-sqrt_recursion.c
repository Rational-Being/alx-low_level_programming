#include "main.h"

int _squareroot( int m, int n)
{
	if (m > n)
		return -1;
	else if (m * m == n)
		return (m);
	return (_squareroot(m +1, n));
}

int _sqrt_recursion(int n)
{
	if (n < 0)
		return -1;
	return (_squareroot(1, n));
}
