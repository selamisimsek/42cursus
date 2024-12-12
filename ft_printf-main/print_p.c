/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualkan <ualkan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 00:54:03 by ualkan            #+#    #+#             */
/*   Updated: 2024/11/30 00:54:04 by ualkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_p(void *ptr)
{
	unsigned long	nbr;
	char			*hex;
	int				len;
	int				printed_len;

	if (!ptr)
	{
		ft_putstr_fd("(nil)", 1);
		return (5);
	}
	nbr = (unsigned long)ptr;
	len = number_len(nbr);
	hex = print_hex(nbr, len, 'L');
	if (hex)
	{
		ft_putstr_fd(hex, 1);
		printed_len = ft_strlen(hex);
		free(hex);
		return (printed_len);
	}
	return (0);
}
