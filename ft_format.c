/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opaulman <opaulman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 15:23:23 by opaulman          #+#    #+#             */
/*   Updated: 2025/07/09 16:57:31 by opaulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libftprintf.h"

int	ft_format(char *Parameter, va_list fyuumi, int Paramcount, int count)
{
	if (Parameter[count] == 'd' || Parameter[count] == 'i')
	{
		ft_putnbr_fd(va_arg(fyuumi, int), 1);
		ft_putchar_fd(' ', 1);
	}
	if (Parameter[count] == 'c')
	{
		ft_putchar_fd(va_arg(fyuumi, int), 1);
	}
	if (Parameter[count] == 's')
	{
		ft_putstr_fd(va_arg(fyuumi, char *), 1);
	}
	// if (Parameter[i] == 'p')
	// {
	// void* in hexadezimal i++;
	// 	ft_printp();
	// }
	// 		if (Parameter[i] == 'u')
	// 		{
	// 			// unsignend int i++;
	// 			ft_printu();
	// 		}
	// 		if (Parameter[i] == 'x')
	// 		{
	// 			// hexadezimal small i++;
	// 			ft_printx();
	// 		}
	// 		if (Parameter[i] == 'X')
	// 		{
	// 			// hexadezimal big i++;
	// 			ft_printX();
	// 		}
	// 	}
	// 	return (0);
	// }
	// void	ft_printp(void)
	// {
	// }
	// void	ft_printu(void)
	// {
	// }
	// void	ft_printx(void)
	// {
	// }
	// void	ft_printX(void)
	// {
	return (0);
}
