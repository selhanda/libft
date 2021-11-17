/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 19:00:05 by selhanda          #+#    #+#             */
/*   Updated: 2021/11/14 14:52:05 by selhanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*map;

	if (!lst || !f)
		return (NULL);
	map = ft_lstnew(f(lst->content));
	if (!map)
	{
		ft_lstclear(&map, del);
		return (NULL);
	}
	map->next = ft_lstmap(lst->next, f, del);
	return (map);
}
