/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesimsek <sesimsek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 17:29:42 by sesimsek          #+#    #+#             */
/*   Updated: 2024/12/28 17:31:42 by sesimsek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	char	*strm;

	str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!str)
		return (NULL);
	strm = str;
	while (*s1)
	{
		*str = *s1;
		str++;
		s1++;
	}
	while (*s2)
	{
		*str = *s2;
		str++;
		s2++;
	}
	*str = '\0';
	return (strm);
}

char	*ft_strchr(const char *src, int c)
{
	char	ch;

	ch = (char)c;
	while (*src != '\0')
	{
		if (*src == ch)
		{
			return ((char *)src);
		}
		src++;
	}
	if (ch == '\0')
	{
		return ((char *)src);
	}
	return (NULL);
}

char	*ft_strdup(const char *s1)
{
	size_t	s1len;
	char	*s2;
	char	*result;

	s1len = ft_strlen(s1);
	s2 = (char *)malloc(s1len + 1);
	if (s2 == NULL)
		return (NULL);
	result = s2;
	while (*s1 != '\0')
	{
		*s2 = *s1;
		s1++;
		s2++;
	}
	*s2 = '\0';
	return (result);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
