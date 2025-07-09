/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_writestring.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opaulman <opaulman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 17:08:12 by opaulman          #+#    #+#             */
/*   Updated: 2025/07/09 17:09:38 by opaulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libftprintf.h"

void	ft_writestring(char *copy, int numofParameters, va_list fyuumi,
		char *Parameters)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (copy[i])
	{
		if (copy[i] == '%')
		{
			i += 2;
			count++;
			ft_format(Parameters, fyuumi, numofParameters, count);
		}
		else
			ft_putchar_fd(copy[i++], 1);
	}
}