/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opaulman <opaulman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 14:19:52 by opaulman          #+#    #+#             */
/*   Updated: 2025/07/07 21:16:46 by opaulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char	*argumentscount(char *s)
{
	int		i;
	char	*output;

	output = ft_strdup(s);
	i = -1;
	while (s != 0)
	{
		s = ft_strchr(s, '%');
		i++;
		output[i + 1] = s[i];
	}
	output[0] = i + '0';
	return (output);
}

// char	*sum(int num, ...)
// {
// 	va_list	fyuumi;
// 	char	*total;
// 	int		i;

// 	total = NULL;
// 	i = 0;
// 	va_start(fyuumi, num);
// 	while (i++ < num)
// 	{
// 		total += va_arg(fyuumi, int);
// 	}
// 	va_end(fyuumi);
// 	return (total);
// }

int	ft_printf(const char *s, ...)
{
	int		arguments;
	char	*copy;
	int		i;

	i = 0;
	copy = ft_strdup(s);
	arguments = 0;
	arguments = argumentscount(copy)[0] - '0';
	printf("%d\n", arguments);
	if (arguments == 0)
	{
		while (copy[i])
			ft_putchar_fd(copy[i++], 1);
	}
	return (0);
}
