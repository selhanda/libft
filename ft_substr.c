/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 10:41:59 by selhanda          #+#    #+#             */
/*   Updated: 2021/11/10 18:48:25 by selhanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	count;
	size_t	l;
	char	*r;

	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	count = 0;
	l = ft_strlen(&s[start]);
	if (len > l)
		len = l;
	r = malloc(sizeof(char) * (len + 1));
	if (!r)
		return (NULL);
	while (count < len)
	{
		r[count] = s[start];
		start++;
		count++;
	}
	r[count] = '\0';
	return (r);
}
