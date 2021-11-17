/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:28:51 by selhanda          #+#    #+#             */
/*   Updated: 2021/11/10 17:58:22 by selhanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dest, char *src)
{
	int	counter;

	counter = 0;
	while (*(src + counter) != 0)
	{
		*(dest + counter) = *(src + counter);
		counter++;
	}
	*(dest + counter) = 0;
	return (dest);
}

char	*ft_strdup(const char *src)
{
	char	*copy;

	copy = malloc(ft_strlen(src) + 1);
	if (copy == NULL)
		return (NULL);
	else
		ft_strcpy(copy, (char *)src);
	return (copy);
}
