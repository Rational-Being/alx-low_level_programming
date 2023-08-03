#include "main.h"
#include "stdio.h"

int is_palindrome_recursive(char *s)
{
	if (!*s)
		return 0;
	return (is_palindrome_recursive(s+1)+1);
}

int palindrome_recursive(char *s, int l)
{
	if (l<=1)
		return 1;
	else if (*s == *(s +l -1))
		return (palindrome_recursive(s +1, l -2));
	else
		return 0;
}

int is_palindrome(char *s)
{
	int l;
	l = is_palindrome(s);
	if (l<=1)
		return 1;
	return (palindrome_recursive(s, l));
}
