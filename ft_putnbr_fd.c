/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesimsek <sesimsek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 18:30:08 by sesimsek          #+#    #+#             */
/*   Updated: 2024/11/02 14:56:19 by sesimsek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_len(int n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	char	num[12];

	i = num_len(n);
	num[i] = '\0';
	if (n == 0)
	{
		ft_putchar_fd('0', fd);
	}
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = n * -1;
	}
	while (n > 0)
	{
		num[--i] = n % 10 + '0';
		n = n / 10;
	}
	ft_putstr_fd(num, fd);
}
