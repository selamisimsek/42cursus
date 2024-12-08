/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesimsek <sesimsek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 17:19:06 by sesimsek          #+#    #+#             */
/*   Updated: 2024/11/01 16:00:15 by sesimsek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_len(int n)
{
	int	len;

	if (n <= 0)
		len = 1;
	else
		len = 0;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*num_str;
	int		len;
	int		sign;

	sign = 1;
	if (n < 0)
		sign = -1;
	len = num_len(n);
	num_str = (char *)malloc(len + 1);
	if (!num_str)
		return (NULL);
	num_str[len] = '\0';
	if (n == 0)
		num_str[0] = '0';
	else
	{
		while (n != 0)
		{
			num_str[--len] = (sign *(n % 10)) + 48;
			n = n / 10;
		}
	}
	if (sign == -1)
		num_str[0] = '-';
	return (num_str);
}
