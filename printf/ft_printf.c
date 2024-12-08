/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesimsek <sesimsek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 18:15:05 by sesimsek          #+#    #+#             */
/*   Updated: 2024/12/01 20:08:37 by sesimsek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	checktype(va_list args, const char str)
{
	unsigned long	ptr;

	if (str == 'c')
		return (ft_print_char(va_arg(args, int)));
	else if (str == 's')
		return (ft_print_str(va_arg(args, char *)));
	else if (str == 'd' || str == 'i')
		return (ft_convert_to_base(va_arg(args, int), "0123456789", str));
	else if (str == 'u')
		return (ft_convert_to_base(va_arg(args, unsigned int),
				"0123456789", 0));
	else if (str == 'x' || str == 'X')
		return (ft_convert_to_base(va_arg(args, unsigned int),
				"0123456789abcdef", str));
	else if (str == '%')
		return (ft_print_char('%'));
	else if (str == 'p')
	{
		ptr = va_arg(args, unsigned long);
		if (!ptr)
			return (ft_print_str("(nil)"));
		ft_print_str("0x");
		return (ft_convert_to_base(ptr, "0123456789abcdef", str) + 2);
	}
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		printlen;

	va_start (args, str);
	printlen = 0;
	while (*str)
	{
		if (*str == '%')
		{
			if (*(str + 1) == '\0')
				return (printlen);
			printlen += checktype(args, *(str + 1));
			str++;
		}
		else
			printlen += write(1, str, 1);
		str++;
	}
	va_end(args);
	return (printlen);
}
