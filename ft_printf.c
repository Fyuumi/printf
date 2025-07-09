/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opaulman <opaulman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 14:19:52 by opaulman          #+#    #+#             */
/*   Updated: 2025/07/09 17:09:38 by opaulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libftprintf.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

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
char	*ft_typeofparam(char *s, int size)
{
	int		i;
	int		count;
	char	*output;

	i = 0;
	count = 0;
	output = ft_calloc(size + 1, sizeof(char));
	if (output == NULL)
		return (NULL);
	while (s[i] != 0)
	{
		if (s[i] == '%')
		{
			output[count] = s[i + 1];
			count++;
			i++;
		}
		i++;
	}
	return (output);
}

int	ft_printf(const char *s, ...)
{
	va_list	fyuumi;
	int		numofParameters;
	char	*copy;
	char	*Parameters;

	va_start(fyuumi, s);
	copy = ft_strdup(s);
	numofParameters = ft_paramcount(copy);
	Parameters = (ft_typeofparam(copy, numofParameters));
	if (Parameters == 0)
		return (0);
	ft_writestring(copy, numofParameters, fyuumi, Parameters);
	va_end(fyuumi);
	return (0);
}
// int	ft_printf(const char *s, ...)
// {
// 	va_list	fyuumi;
// 	int		numofParameters;
// 	char	*copy;
// 	char	*Parameters;

// 	va_start(fyuumi, s);
// 	copy = ft_strdup(s);
// 	numofParameters = Paramcount(copy);
// 	printf("num of parameters: %d", numofParameters);
// 	printf("\n");
// 	Parameters = (typeofparam(copy, numofParameters));
// 	if (Parameters == 0)
// 		return (0);
// 	printf("type of Parameters: %s", Parameters);
// 	printf("\n");
// 	writestring(copy);
// 	printf("\n");
// 	printf("the things inside of the paramter:\n");
// 	ft_format(Parameters, fyuumi, numofParameters);
// 	va_end(fyuumi);
// 	printf("\n");
// 	printf("\n");
// 	return (0);
// }
// code with printf checks
