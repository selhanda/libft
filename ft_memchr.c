/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:28:42 by selhanda          #+#    #+#             */
/*   Updated: 2021/11/10 17:00:50 by selhanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char unsigned	*ptr;
	size_t			l;

	ptr = (char unsigned *)s;
	l = 0;
	while (n > l)
	{
		if (*ptr == (char unsigned)c)
		{
			return (ptr);
		}
		l++;
		ptr++;
	}
	return (0);
}
