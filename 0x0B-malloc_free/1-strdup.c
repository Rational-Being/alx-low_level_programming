#include <stdlib.h>
#include "main.h"

char *_strdup(char *str)
{
	int i = 0;
	int length = 0;
	char *s;
	char *u;
	
	if (str == NULL)
		return (NULL);

	s = str;

	while (*str)
	{
		length++;
		str++;
	}

	str = s;
	u = malloc(sizeof(char) * (length +1 ));

	if (u != NULL){
		for (; i < length; i++)
		{
			s[i] = *str;
			str++;
		}
		u[i] = '\0';
		return (s);
	}
	else 
		return (NULL);
}
