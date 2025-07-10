/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_writestring.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opaulman <opaulman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 17:08:12 by opaulman          #+#    #+#             */
/*   Updated: 2025/07/10 21:03:15 by opaulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_writestring(char *copy, va_list fyuumi, char *Parameters)
{
	int		i;
	int		count;
	int		len;
	char	*digits;

	digits = ft_calloc(8, sizeof(char));
	digits = "dicsxXup";
	len = 0;
	i = 0;
	count = 0;
	while (copy[i])
	{
		if (copy[i] == '%')
		{
			i += 2;
			len += ft_format(Parameters, fyuumi, count);
			count++;
		}
		else
			ft_putchar_fd(copy[i++], 1);
	}
	len += i;
	len -= (count * 2);
	return (len);
}
