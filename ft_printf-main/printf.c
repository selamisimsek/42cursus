/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualkan <ualkan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 00:54:35 by ualkan            #+#    #+#             */
/*   Updated: 2024/11/30 00:57:01 by ualkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_arg(char type, va_list *args)
{
	int	written;

	written = 0;
	if (type == 'c')
		written += print_c(va_arg(*args, int));
	else if (type == 'd' || type == 'i')
		written += print_d(va_arg(*args, int));
	else if (type == 's')
		written += print_s(va_arg(*args, char *));
	else if (type == 'p')
		written += print_p(va_arg(*args, void *));
	else if (type == 'u')
		written += print_u(va_arg(*args, unsigned int));
	else if (type == 'x')
		written += print_lx(va_arg(*args, unsigned int));
	else if (type == 'X')
		written += print_bx(va_arg(*args, unsigned int));
	else if (type == '%')
	{
		write(1, "%%", 1);
		written++;
	}
	return (written);
}

int	ft_printf(const char *f, ...)
{
	va_list	arglist;
	int		count;

	va_start(arglist, f);
	count = 0;
	while (*f)
	{
		if (*f == '%')
		{
			f++;
			count += print_arg(*f, &arglist);
		}
		else
		{
			write(1, f, 1);
			count++;
		}
		f++;
	}
	va_end(arglist);
	return (count);
}
