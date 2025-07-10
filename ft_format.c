/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opaulman <opaulman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 15:23:23 by opaulman          #+#    #+#             */
/*   Updated: 2025/07/10 21:03:37 by opaulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printd(int c)
{
	ft_putnbr_fd(c, 1);
	return (ft_strlen(ft_itoa(c)));
}

int	ft_prints(char *s)
{
	ft_putstr_fd(s, 1);
	return (ft_strlen(s));
}

int	ft_printu(unsigned int u)
{
	ft_putnbr_fd(u, 1);
	return (1);
}

int	ft_format(char *parameter, va_list fyuumi, int count)
{
	if (parameter[count] == 'd' || parameter[count] == 'i')
		return (ft_printd(va_arg(fyuumi, int)));
	if (parameter[count] == 'c')
	{
		ft_putchar_fd(va_arg(fyuumi, int), 1);
		return (1);
	}
	if (parameter[count] == 's')
		return (ft_prints(va_arg(fyuumi, char *)));
	if (parameter[count] == '%')
	{
		ft_putchar_fd('%', 1);
		return (1);
	}
	if (parameter[count] == 'u')
		return (ft_printu(va_arg(fyuumi, unsigned int)));
	if (parameter[count] == 'x' || parameter[count] == 'X'
		|| parameter[count] == 'p')
		return (ft_hex(fyuumi, parameter, count));
	return (0);
}
