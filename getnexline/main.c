#include "get_next_line.h"
#include <stdio.h>
#include <string.h>

void ornek()
{
	static int nbr = 0;
	int nbr1 = 0;
	nbr++;
	nbr1++;

	printf("%d  %d \n",nbr,nbr1);
}

int main()
{
	int i = 0;
	while(i < 99999)
	{
		ornek();
		i++;
	}
	return(0);
}