/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:27:57 by selhanda          #+#    #+#             */
/*   Updated: 2021/11/13 14:54:50 by selhanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstlast(t_list *lst)
{
	int		i;
	int		len;
	t_list	*last;

	if (!lst)
		return (NULL);
	i = 0;
	len = ft_lstsize(lst);
	while (i < len - 1)
	{
		lst = lst->next;
		i++;
	}
	last = lst;
	return (last);
}
