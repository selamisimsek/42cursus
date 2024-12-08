/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesimsek <sesimsek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 19:08:00 by sesimsek          #+#    #+#             */
/*   Updated: 2024/12/02 12:54:21 by sesimsek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_print_char(char c);
int		ft_print_str(char *str);
int		ft_convert_to_base(size_t nbr, char *base, char type);
size_t	ft_strlen(const char *str);
int		ft_printf(const char *format, ...);

#endif