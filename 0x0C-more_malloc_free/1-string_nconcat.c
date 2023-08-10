#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that joins two strings togather
 * @s1: first argument
 * @s2: secind arg
 * @n: unsignet int
 * Return: a pointer variable
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, tot_len, i, j;
	char *conc;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	if (n >= len2)
		n = len2;

	tot_len = len1 + n;

	conc = malloc(tot_len + 1);
	if (conc == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		conc[i] = s1[i];

	for (j = 0; j < n; j++)
		conc[i + j] = s2[j];

	conc[i + j] = '\0';

	return (conc);
}
