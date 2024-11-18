/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesimsek <sesimsek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 20:58:35 by sesimsek          #+#    #+#             */
/*   Updated: 2024/11/11 16:19:17 by sesimsek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int	node_count;
	int	a;

	if (lst == NULL)
		return (NULL);
	a = 0;
	node_count = ft_lstsize(lst);
	while (a < node_count - 1)
	{
		a++;
		lst = lst -> next;
	}
	return (lst);
}
