/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualkan <ualkan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 13:47:41 by ualkan            #+#    #+#             */
/*   Updated: 2024/10/25 16:09:58 by ualkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	lenint(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t			len;
	char			*space;
	unsigned int	num;

	len = lenint(n);
	space = (char *)malloc((len + 1) * sizeof(char));
	if (!space)
		return (0);
	space[len] = '\0';
	num = n;
	if (n < 0)
	{
		space[0] = '-';
		num = -n;
	}
	while (num > 0)
	{
		space[--len] = (num % 10) + '0';
		num = num / 10;
	}
	if (n == 0)
		space[0] = '0';
	return (space);
}
