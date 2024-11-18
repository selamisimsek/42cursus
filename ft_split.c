/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesimsek <sesimsek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 17:44:57 by sesimsek          #+#    #+#             */
/*   Updated: 2024/11/05 19:45:54 by sesimsek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	wordcount(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != c && *s)
		{
			count++;
		}
		while (*s != c && *s)
			s++;
	}
	return (count);
}

static void	free_arr(char	**arr, int wordcount)
{
	int	i;

	i = 0;
	if (!arr)
		return ;
	while (i < wordcount)
		free(arr[i++]);
	free(arr);
}

char	**ft_split(char const *s, char c)
{
	char		**arr;
	char const	*sm;
	int			i;

	i = 0;
	if (!s)
		return (NULL);
	arr = (char **)malloc((wordcount(s, c) + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	while (*s)
	{
		while (*s == c)
			s++;
		sm = s;
		while (*s != c && *s)
			s++;
		if (sm == s)
			break ;
		arr[i] = ft_substr(sm, 0, s - sm);
		if (!arr[i++])
			return (free_arr(arr, i), NULL);
	}
	arr[i] = NULL;
	return (arr);
}
