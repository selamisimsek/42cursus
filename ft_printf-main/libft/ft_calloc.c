/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualkan <ualkan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 13:45:47 by ualkan            #+#    #+#             */
/*   Updated: 2024/10/31 14:11:30 by ualkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	size_t	i;
	char	*p;
	void	*arr;

	arr = malloc(num * size);
	if (!arr)
		return (0);
	i = 0;
	p = (char *)arr;
	while (i < num * size)
	{
		p[i] = 0;
		i++;
	}
	return (arr);
}
