/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesimsek <sesimsek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 17:08:21 by sesimsek          #+#    #+#             */
/*   Updated: 2024/12/16 16:16:45 by sesimsek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *rwfd(int fd, char *readstr)
{
	int		rb;
	char 	*str;
	
	str = malloc(BUFFER_SIZE + 1);
	rb = 1;
	while (!ft_strchr(readstr, '\n') && rb != 0)
	{
		rb = read(fd,str,BUFFER_SIZE);
		printf("%d",rb);
		if (rb == -1)
		{
			free(str);
			return (NULL);
		}
		str[rb] = '\0';
		readstr = ft_strjoin(readstr,str);
	}
	free(str);
	return (readstr);
}

char	*ifend(char *returnstr)
{
	char *str;
	int i;

	i = 0;
	while (returnstr[i] != '\n' || returnstr[i] != '\0')
		i++;
	if (returnstr[i + 2] == '\0'&& returnstr[i + 1] == '\n')
		str = malloc(i + 2);
	else
		str = malloc(i + 1);
	i = 0;
	while (returnstr[i])
	{
		str[i] = returnstr[i];
		i++;
	}
	str[i] = '\0';
	return(str);
}

char *get_next_line(int fd)
{
	static char *readstr;
	char		*returnstr;

	readstr = NULL;
	returnstr = rwfd(fd,readstr);
	returnstr = ifend(returnstr);
	return(returnstr);
}

// char	*get_next_line(int fd)
// {
// 	char *str;
// 	char *line;
// 	line = malloc(1);
// 	str = malloc(5);
// 	// while(ft_strchr(str,'\n') == NULL)
// 	// {
// 		int a = read(fd,str,4);
// 		printf("%d", a);
// 		// if ( a == 0)
// 		// 	return(NULL);
// 		str[a] = '\0';
// 		line = ft_strjoin(line,str);
// 	// }
// 	return(line);	
// }
