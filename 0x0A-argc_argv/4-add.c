#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    int sum = 0;
    int num;
    int i;

    while(argc-- > 1)
    {
	    for (i=0; argv[argc][i]; i++)
	    {
		    if (!(isdigit(argv[argc][i])))
		    {
			    printf("Eroor\n");
			    return (1);
		    }
	    }
	    num = atoi(argv[argc]);
	    sum+= num;
    }
    printf("%d\n", sum);
    return (0);
}

