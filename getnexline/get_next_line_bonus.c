/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesimsek <sesimsek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 17:08:21 by sesimsek          #+#    #+#             */
/*   Updated: 2024/12/27 21:13:31 by sesimsek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*rwfd(int fd, char *readstr)
{
	int		rb;
	char	*str;
	char	*temp;

	str = malloc(BUFFER_SIZE + 1);
	if (!str)
		return (NULL);
	rb = 1;
	while (!ft_strchr(readstr, '\n') && rb != 0)
	{
		rb = read(fd, str, BUFFER_SIZE);
		if (rb == -1)
			return (free(str), free(readstr), NULL);
		str[rb] = '\0';
		temp = readstr;
		readstr = ft_strjoin(temp, str);
		free(temp);
	}
	free(str);
	return (readstr);
}

char	*update_str(char *str1)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str1[i] != '\n' && str1[i])
		i++;
	if (!str1[i])
	{
		free(str1);
		return (NULL);
	}
	str = malloc(ft_strlen(str1) - i + 1);
	if (!str)
		return (NULL);
	i++;
	while (str1[i])
		str[j++] = str1[i++];
	str[j] = '\0';
	free(str1);
	return (str);
}

char	*oneline(char *str)
{
	char	*line;
	int		i;

	i = 0;
	if (!str[0])
		return (NULL);
	while (str[i] != '\n' && str[i])
		i++;
	if (str[i] == '\n' && str[i])
		line = malloc(i + 2);
	else
		line = malloc(i + 1);
	if (!line)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
	{
		line[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*readstr;
	char		*line;

	if (!readstr)
		readstr = ft_strdup("");
	readstr = rwfd(fd, readstr);
	if (!readstr)
		return (NULL);
	line = oneline(readstr);
	readstr = update_str(readstr);
	return (line);
}
