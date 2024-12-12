/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_d.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualkan <ualkan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 00:53:57 by ualkan            #+#    #+#             */
/*   Updated: 2024/11/30 00:53:58 by ualkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_d(int arg)
{
	char	*a;
	int		len;

	a = ft_itoa(arg);
	len = 0;
	if (a)
	{
		len = ft_strlen(a);
		write(1, a, len);
		free(a);
	}
	return (len);
}
