/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesimsek <sesimsek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 20:56:07 by sesimsek          #+#    #+#             */
/*   Updated: 2024/12/05 18:42:12 by sesimsek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_convert_to_base(size_t nbr, char *base, char type)
{
	int		len;
	int		i;
	char	buff[50];

	if (nbr == 0)
		return (ft_print_char('0'));
	if ((int)nbr == -2147483648 && (type == 'd' || type == 'i'))
		return (ft_print_str("-2147483648"));
	if ((int)nbr < 0 && (type == 'd' || type == 'i'))
		return (nbr *= -1, ft_print_char('-')
			+ ft_convert_to_base(nbr, "0123456789", 0));
	if (type == 'X')
		base = "0123456789ABCDEF";
	i = 50;
	len = ft_strlen(base);
	buff[--i] = '\0';
	while (nbr > 0)
	{
		buff[--i] = base[nbr % len];
		nbr /= len;
	}
	return (ft_print_str((buff + i)));
}
