/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:20:34 by selhanda          #+#    #+#             */
/*   Updated: 2021/11/12 11:22:11 by selhanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_check(const char *sp, long n, int s)
{
	while (*sp == ' ' || (*sp >= 9 && *sp <= 13))
		sp++;
	if (*sp == '-' || *sp == '+')
	{
		if (*sp == '-')
			s *= -1;
		sp++;
	}
	while (*sp != '\0')
	{
		if (*sp >= '0' && *sp <= '9')
		{	
			n *= 10;
			if (n > 2147483647 && s == -1)
				return (0);
			else if (n < -2147483648 && s == 1)
				return (-1);
			n += (*sp - '0');
		}
		else
			break ;
		sp++;
	}
	return (n * s);
}

int	ft_atoi(const char *str)
{
	long	n;
	int		s;
	char	*sp;

	n = 0;
	s = 1;
	sp = (char *)str;
	return (ft_check(sp, n, s));
}
