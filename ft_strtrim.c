/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 13:23:14 by selhanda          #+#    #+#             */
/*   Updated: 2021/11/11 11:43:20 by selhanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_isset(char const *set, char c)
{
	int	i;
	int	len;

	len = ft_strlen(set);
	i = 0;
	while (i < len)
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		start;
	int		end;

	if (!s1)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (ft_isset(set, s1[start]))
		start++;
	while (ft_isset(set, s1[end]) && end > 0)
		end--;
	if (end < start)
		return (ft_strdup(""));
	str = (char *)malloc(end - start + 2);
	if (!str)
		return (NULL);
	ft_memmove(str, &s1[start], end - start + 1);
	str[end - start + 1] = '\0';
	return (str);
}
