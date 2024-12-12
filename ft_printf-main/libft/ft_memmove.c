/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualkan <ualkan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 13:49:16 by ualkan            #+#    #+#             */
/*   Updated: 2024/10/26 20:32:40 by ualkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	const char	*source;
	char		*dst;

	if ((!dest && !src) || n == 0)
		return (dest);
	source = (const char *)src;
	dst = (char *)dest;
	if (dst > source)
	{
		i = n;
		while (i > 0)
		{
			i--;
			dst[i] = source[i];
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
