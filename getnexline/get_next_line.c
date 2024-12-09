/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesimsek <sesimsek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 17:08:21 by sesimsek          #+#    #+#             */
/*   Updated: 2024/12/08 22:42:37 by sesimsek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char *str;
	char *line;
	line = malloc(1);
	str = malloc(5);
	while(ft_strchr(str,'\n') == NULL)
	{
		int a = read(fd,str,4);
		if ( a == 0)
			return(NULL);
		str[a] = '\0';
		line = ft_strjoin(line,str);
	}
	return(line);	
}
