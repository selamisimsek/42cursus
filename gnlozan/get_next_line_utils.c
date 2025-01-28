/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboran <oboran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 16:28:41 by oboran            #+#    #+#             */
/*   Updated: 2025/01/21 16:54:08 by oboran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char   *ft_strjoin(char const *s1, char const *s2)
{
	int		totalsize;
	char	*res;
	int		i;
	int		j;

	i = 0;
	totalsize = ft_strlen(s1) + ft_strlen(s2);
	res = malloc(sizeof(char) * (totalsize + 1));
	if (!res || !s1 || !s2)
		return (NULL);
	while (s1[i] != 0)
	{
		res[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != 0)
	{
		res[i] = s2[j];
		i++;
		j++;
	}
	res[totalsize] = 0;
	return (res);
}

char	*ft_strchar(const char *string, int wantedchar)
{
	char	*str;

	str = (char *)string;
	while (*str != wantedchar && *str != 0)
		str++;
	if(*str == wantedchar)
		return (str);
	else
		return (NULL);
}

void	ft_bzero(void *s, size_t n)
{
	char *str;
	size_t i;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}

void *ft_calloc(size_t count, size_t size)
{
	char *res;

	res = malloc(size * count);
	if (!res)
		return (NULL);
	ft_bzero(res, size * count);
	return (res);
}

size_t ft_strlen(const char *string)
{
	int	i;

	i = 0;
	while (string[i])
		i++;
	return (i);
}