/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_c.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualkan <ualkan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 00:53:54 by ualkan            #+#    #+#             */
/*   Updated: 2024/11/30 00:57:45 by ualkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_c(int arg)
{
	unsigned char	c;

	c = (unsigned char)arg;
	write(1, &c, 1);
	return (1);
}