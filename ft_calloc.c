/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesimsek <sesimsek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:10:15 by sesimsek          #+#    #+#             */
/*   Updated: 2024/11/09 20:41:39 by sesimsek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*anyone;

	anyone = malloc(count * size);
	if (!anyone)
		return (NULL);
	ft_bzero(anyone, count * size);
	return (anyone);
}
