/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opaulman <opaulman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 14:19:52 by opaulman          #+#    #+#             */
/*   Updated: 2025/07/07 17:44:39 by opaulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int	argumentscount(const char *s)
{
	int	i;
	int	count;

	while (s[i])
	{
		strchr(s, '%');
		i++;
		count++;
	}
	return (count == count / 2);
}

char	*sum(int num, ...)
{
	va_list	fyuumi;
	char	*total;
	int		i;

	i = 0;
	va_start(fyuumi, num);
	while (i++ < num)
	{
		total += va_arg(fyuumi, int);
	}
	va_end(fyuumi);
	return (total);
}

int	ft_printf(const char *s, ...)
{
	int	arguments;

	arguments = argumentscount(s);
	if (arguments == 0)
	{
		ft_putstr_fd(1, s);
	}
}

int	main(void)
{
	ft_printf("summe: \n");
	printf("summe: \n");
}