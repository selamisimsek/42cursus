/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualkan <ualkan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 00:54:21 by ualkan            #+#    #+#             */
/*   Updated: 2024/11/30 00:54:24 by ualkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	number_len(unsigned long nbr)
{
	int	len;

	len = 0;
	if (nbr == 0)
		return (1);
	while (nbr > 0)
	{
		len++;
		nbr /= 16;
	}
	return (len);
}

char	*print_hex(unsigned long nbr, int len, char type)
{
	int		r;
	char	*hexadecimal;

	hexadecimal = (char *)malloc(len + 3);
	if (!hexadecimal)
		return (NULL);
	hexadecimal[len + 2] = '\0';
	while (len > 0)
	{
		r = nbr % 16;
		if (type == 'L')
			hexadecimal[--len + 2] = HEX_LOW_BASE[r];
		else
			hexadecimal[--len + 2] = HEX_UP_BASE[r];
		nbr /= 16;
	}
	hexadecimal[0] = '0';
	hexadecimal[1] = 'x';
	return (hexadecimal);
}
