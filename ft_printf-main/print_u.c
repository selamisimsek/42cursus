/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualkan <ualkan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 00:54:15 by ualkan            #+#    #+#             */
/*   Updated: 2024/11/30 00:54:16 by ualkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_u(unsigned int nbr)
{
	char	*a;
	int		len;

	a = ft_utoa(nbr);
	len = 0;
	if (a)
	{
		len = ft_strlen(a);
		write(1, a, len);
		free(a);
	}
	return (len);
}
