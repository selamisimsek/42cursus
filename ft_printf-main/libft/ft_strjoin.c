/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualkan <ualkan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 13:50:32 by ualkan            #+#    #+#             */
/*   Updated: 2024/10/25 13:50:32 by ualkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	lens1;
	size_t	lens2;
	char	*space;
	size_t	i;
	size_t	j;

	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	space = (char *)malloc((lens1 + lens2 + 1) * sizeof(char));
	if (!space)
		return (NULL);
	i = 0;
	while (i < lens1)
	{
		space[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < lens2)
	{
		space[i + j] = s2[j];
		j++;
	}
	space[i + j] = '\0';
	return (space);
}
