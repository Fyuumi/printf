/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_paramcount.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opaulman <opaulman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 17:14:27 by opaulman          #+#    #+#             */
/*   Updated: 2025/07/10 21:03:29 by opaulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_paramcount(char *s)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (s[i] != 0)
	{
		if (s[i] == '%' && s[i + 1] != '%')
		{
			count++;
		}
		i++;
	}
	return (count);
}
