/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:07:15 by selhanda          #+#    #+#             */
/*   Updated: 2021/11/10 17:47:04 by selhanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nbr_u;

	if (n < 0)
	{
		nbr_u = (unsigned int)(-1 * n);
		ft_putchar_fd('-', fd);
	}
	else
		nbr_u = (unsigned int)n;
	if (nbr_u >= 10)
	{
		ft_putnbr_fd(nbr_u / 10, fd);
		ft_putnbr_fd(nbr_u % 10, fd);
	}
	else
		ft_putchar_fd(nbr_u + '0', fd);
}
