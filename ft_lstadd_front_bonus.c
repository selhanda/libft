/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 18:35:09 by selhanda          #+#    #+#             */
/*   Updated: 2021/11/13 14:51:21 by selhanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

// int main()
// {
// 	t_list	*mylist;
// 	t_list	*mylist2;
// 	t_list	*mylist3;
// 	t_list	*mylist4;
// 	int i = 1;
// 	int f = 101;
// 	mylist = malloc(sizeof(t_list));
// 	mylist2 = malloc(sizeof(t_list));
// 	mylist3 = malloc(sizeof(t_list));
// 	mylist4 = malloc(sizeof(t_list));
// 	mylist->content = i;
// 	mylist->next = mylist2;
// 	mylist2->content = i;
// 	mylist2->next = mylist3;
// 	mylist3->content = i;
// 	mylist3->next = mylist4;
// 	mylist4->content = i;
// 	mylist4->next = NULL;
// 	t_list *new;
// 	new = malloc(sizeof(t_list));
// 	new->content = f;
// 	new->next = NULL;
// 	// ft_lstadd_front(&mylist, new);
// 	ft_lstadd_back(&mylist, new);
// 	while (mylist)
// 	{
// 		printf("%d\n",mylist->content);
// 		mylist = mylist->next;
// 	}
// }

