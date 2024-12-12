/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualkan <ualkan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 00:53:13 by ualkan            #+#    #+#             */
/*   Updated: 2024/11/30 01:04:44 by ualkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
# include <stdarg.h>

# define HEX_LOW_BASE "0123456789abcdef"
# define HEX_UP_BASE "0123456789ABCDEF"

int		ft_printf(const char *format, ...);
int		print_c(int arg);
int		print_d(int arg);
int		print_s(char *arg);
int		print_p(void *ptr);
int		print_u(unsigned int nbr);
int		print_lx(unsigned int nbr);
int		print_bx(unsigned int nbr);
int		number_len(unsigned long nbr);
char	*print_hex(unsigned long nbr, int len, char type);

#endif
