/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualkan <ualkan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 00:53:00 by ualkan            #+#    #+#             */
/*   Updated: 2024/11/30 00:53:03 by ualkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	len_unsigned(unsigned int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		len = 1;
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_utoa(unsigned int n)
{
	size_t	len;
	char	*space;

	len = len_unsigned(n);
	space = (char *)malloc((len + 1) * sizeof(char));
	if (!space)
		return (0);
	space[len] = '\0';
	while (len > 0)
	{
		space[--len] = (n % 10) + '0';
		n = n / 10;
	}
	return (space);
}
