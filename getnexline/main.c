#include "get_next_line.h"
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <fcntl.h>

// void ornek()
// {
// 	static int nbr = 0;
// 	int nbr1 = 0;
// 	nbr++;
// 	nbr1++;

// 	printf("%d  %d \n",nbr,nbr1);
// }

// int main()
// {
// 	int i = 0;
// 	while(i < INT_MAX)
// 	{
// 		ornek();
// 		i++;
// 	}
// 	return(0);
// }


int main()
{
	int fd = open("test.txt", O_RDWR);
	
	char *str = get_next_line(fd);
	printf("%s",str);
	free(str);
	str = get_next_line(fd);
	printf("%s",str);
	free(str);
	str = get_next_line(fd);
	printf("%s",str);
	free(str);
	str = get_next_line(fd);
	printf("%s",str);
	free(str);
	str = get_next_line(fd);
	printf("%s",str);
	free(str);
	str = get_next_line(fd);
	printf("%s",str);
	free(str);
	str = get_next_line(fd);
	printf("%s",str);
	free(str);
	str = get_next_line(fd);
	printf("%s",str);
	free(str);
	str = get_next_line(fd);
	printf("%s",str);
	free(str);
}