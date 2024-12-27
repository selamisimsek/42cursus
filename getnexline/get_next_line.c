/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesimsek <sesimsek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 17:08:21 by sesimsek          #+#    #+#             */
/*   Updated: 2024/12/27 16:01:17 by sesimsek         ###   ########.fr       */
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
		if (rb == -1)
			return (free(str),NULL);
		str[rb] = '\0';
		readstr = ft_strjoin(readstr,str);
	}
	free(str);
	return (readstr);
}

char	*update_str(char *str1)
{
	char *str;
	int i;
	int j;
	i = 0;
	j = 0;
	while (str1[i] != '\n' && str1[i])
		i++;
	str = malloc(ft_strlen(str1) - i + 1);
	i++;
	while (str1[i])
		str[j++] = str1[i++];
	str[j] = '\0';
	return(str);
}

char	*oneline(char *str)
{
	char	*line;
	int			i;

	i = 0;
	while (str[i] != '\n' && str[i])
		i++;
	if(str[i] == '\n')
		line = malloc(i + 2);
	else
		line = malloc(i + 1);
	i = 0;
	while (str[i] && str[i] != '\n')
	{
		line[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	return(line);
}

char *get_next_line(int fd)
{
	static char *readstr;
	char		*line;

	if (!readstr)
		readstr = "";
	readstr = rwfd(fd,readstr);
	line = oneline(readstr);
	readstr = update_str(readstr);
	return(line);
}

// char	*get_next_line(int fd)
// {
// 	char *str;
// 	char *line;
// 	line = malloc(1);
// 	str = malloc(5);
// 	int a = 1;
// 	 while(a != 0)
// 	{
// 		a = read(fd,str,4);
// 		// printf("%d", a);
// 		if ( a == 0)
// 			return(NULL);
// 		str[a] = '\0';
// 		line = ft_strjoin(line,str);
// 	}
// 	return(line);	
// }
