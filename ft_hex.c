/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opaulman <opaulman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 19:51:17 by opaulman          #+#    #+#             */
/*   Updated: 2025/07/10 21:03:33 by opaulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*hexadezimal(char *rest16, unsigned long p16)
{
	int	c;

	c = 0;
	while (p16 > 0)
	{
		if (p16 % 16 < 10)
			rest16[c++] = '0' + p16 % 16;
		else
			rest16[c++] = 'a' + (p16 % 16 - 10);
		p16 /= 16;
	}
	return (rest16);
}

int	ft_printp(void *p)
{
	unsigned long	p16;
	char			*rest16;
	int				c;

	if (p == NULL)
	{
		ft_putstr_fd("(nil)", 1);
		return (5);
	}
	p16 = (unsigned long)p;
	c = 0;
	rest16 = ft_calloc(20, sizeof(char));
	hexadezimal(rest16, p16);
	ft_putstr_fd("0x", 1);
	c = ft_strlen(rest16);
	while (--c >= 0)
		ft_putchar_fd(rest16[c], 1);
	return (ft_strlen(rest16));
}

int	ft_printx(int i)
{
	char	*rest16;
	int		c;

	rest16 = ft_calloc(20, sizeof(char));
	hexadezimal(rest16, (unsigned long)i);
	c = ft_strlen(rest16);
	while (--c >= 0)
		ft_putchar_fd(rest16[c], 1);
	c = ft_strlen(rest16);
	free(rest16);
	return (c);
}

int	ft_printbigx(int i)
{
	char	*rest16;
	int		c;
	int		len;

	c = 0;
	rest16 = ft_calloc(20, sizeof(char));
	rest16 = hexadezimal(rest16, (unsigned long)i);
	len = ft_strlen(rest16);
	while (c < len)
	{
		if (rest16[c] >= 'a' && rest16[c] <= 'z')
		{
			rest16[c] -= 32;
		}
		c++;
	}
	while (--c >= 0)
		ft_putchar_fd(rest16[c], 1);
	free(rest16);
	return (len);
}

int	ft_hex(va_list fyuumi, char *parameter, int count)
{
	if (parameter[count] == 'x')
		return (ft_printx(va_arg(fyuumi, int)));
	if (parameter[count] == 'X')
		return (ft_printbigx(va_arg(fyuumi, int)));
	if (parameter[count] == 'p')
		return (ft_printp(va_arg(fyuumi, void *)));
	return (0);
}
