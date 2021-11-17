/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:48:26 by selhanda          #+#    #+#             */
/*   Updated: 2021/11/12 08:41:09 by selhanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			count;
	unsigned char	*mydst;
	unsigned char	*mysrc;

	mydst = (char unsigned *)dst;
	mysrc = (char unsigned *)src;
	count = 0;
	if (!mydst && !mysrc)
		return (NULL);
	if (mydst > mysrc)
	{
		while (len--)
			mydst[len] = mysrc[len];
	}
	else
	{
		while (count < len)
		{
			mydst[count] = mysrc[count];
			count++;
		}	
	}
	return (dst);
}
