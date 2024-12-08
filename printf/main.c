#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main()
{
	int nbrmin = INT_MIN;
	int nbrmax = INT_MAX;
	char *str = "comolokko";
	char c = 'c';
	int nbr = -2147483648;
	unsigned int nbr1 = 4294967295;
	printf("%d",printf("%s %c %d %i %u %x %X %% %p","pazAR",c,nbr,nbr,nbr1, nbr1,nbr1,&str));
	ft_printf("%d",ft_printf("%s %c %d %i %u %x %X %% %p","pazAR",c,nbr,nbr,nbr1, nbr1,nbr1,&str));
	ft_printf("\n%d\n", ft_printf(" %p %p ", nbrmin, nbrmax));
	printf("\n%d\n", printf(" %p %p ", nbrmin, nbrmax));
}