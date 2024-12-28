/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesimsek <sesimsek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 17:29:35 by sesimsek          #+#    #+#             */
/*   Updated: 2024/12/28 17:32:13 by sesimsek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 4
# endif

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strchr(const char *src, int c);
char	*ft_strdup(const char *s1);
size_t	ft_strlen(const char *str);
char	*get_next_line(int fd);

#endif