/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesimsek <sesimsek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 17:08:21 by sesimsek          #+#    #+#             */
/*   Updated: 2024/12/09 19:03:57 by sesimsek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char *str;
	static char *line;
	
	line = "";
	str = malloc((BUFFER_SIZE + 1 )* sizeof(char));
	while(ft_strchr(str,'\n') == NULL)
	{
		int a = read(fd,str,BUFFER_SIZE);
		if ( a == 0)
			return(NULL);
		str[a] = '\0';
		line = ft_strjoin(line,str);
	}
	return(line);
}



// char	*get_next_line(int fd)
// {
// 	char *str;
// 	char *line;
// 	line = malloc(1);
// 	str = malloc(5);
// 	while(ft_strchr(str,'\n') == NULL)
// 	{
// 		int a = read(fd,str,BUFFER_SIZE);
// 		if ( a == 0)
// 			return(NULL);
// 		str[a] = '\0';
// 		line = ft_strjoin(line,str);
// 	}
// 	return(line);	
// }
