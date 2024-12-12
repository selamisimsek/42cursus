/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualkan <ualkan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 13:51:35 by ualkan            #+#    #+#             */
/*   Updated: 2024/10/25 13:51:35 by ualkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	contains(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*space;

	i = 0;
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && contains(s1[start], set))
		start++;
	while (end > start && contains(s1[end - 1], set))
		end--;
	space = (char *)malloc((end - start + 1) * sizeof(char));
	if (!space)
		return (NULL);
	while (i < end - start)
	{
		space[i] = s1[start + i];
		i++;
	}
	space[end - start] = '\0';
	return (space);
}
