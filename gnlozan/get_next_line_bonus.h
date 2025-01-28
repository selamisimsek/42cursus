/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboran <oboran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 19:05:51 by oboran            #+#    #+#             */
/*   Updated: 2025/01/23 19:07:23 by oboran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# define BUFFER_SIZE 42
# include "stdlib.h"
# include "sys/types.h"
# include "sys/uio.h"
# include "unistd.h"

char	*get_next_line_(int fd);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strchar(const char *string, int wantedchar);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
size_t	ft_strlen(const char *string);

#endif