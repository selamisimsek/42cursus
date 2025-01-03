/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesimsek <sesimsek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 20:23:19 by sesimsek          #+#    #+#             */
/*   Updated: 2024/12/27 14:11:07 by sesimsek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *src, int c)
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
