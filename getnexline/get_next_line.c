/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesimsek <sesimsek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 17:08:21 by sesimsek          #+#    #+#             */
/*   Updated: 2024/12/09 21:25:49 by sesimsek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *rwfd(int fd, char *readstr)
{
	int		rb;
	char 	*str;
	
	str = malloc(BUFFER_SIZE + 1);
	rb = 1;
	while (ft_strchr(str, '\n') != NULL && rb != 0)
	{
		rb = read(fd,str,BUFFER_SIZE);
		if (rb == -1)
		{
			free(str);
			free(readstr);
			return (NULL);
		}
		str[rb] = '\0';
		readstr = ft_strjoin(readstr,str);
	}
	free(str);
	return (readstr);
}

char *get_next_line(int fd)
{
	static char *readstr;
	char		*returnstr;
	
	readstr = rwfd(fd,readstr);
	return(readstr);
}




// char	*get_next_line(int fd)
// {
// 	char *str;
// 	char *line;
// 	line = malloc(1);
// 	str = malloc(5);
// 	while(ft_strchr(str,'\n') == NULL)
// 	{
// 		int a = read(fd,str,4);
// 		if ( a == 0)
// 			return(NULL);
// 		str[a] = '\0';
// 		line = ft_strjoin(line,str);
// 	}
// 	return(line);	
// }
