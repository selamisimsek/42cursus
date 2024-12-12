/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_x.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualkan <ualkan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 00:54:28 by ualkan            #+#    #+#             */
/*   Updated: 2024/11/30 00:57:31 by ualkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_lx(unsigned int nbr)
{
	int		len;
	char	*a;
	int		written;

	len = number_len(nbr);
	a = print_hex(nbr, len, 'L');
	written = 0;
	if (a)
	{
		ft_putstr_fd(a + 2, 1);
		written = ft_strlen(a + 2);
		free(a);
	}
	return (written);
}

int	print_bx(unsigned int nbr)
{
	int		len;
	char	*a;
	int		written;

	len = number_len(nbr);
	a = print_hex(nbr, len, 'U');
	written = 0;
	if (a)
	{
		ft_putstr_fd(a + 2, 1);
		written = ft_strlen(a + 2);
		free(a);
	}
	return (written);
}
