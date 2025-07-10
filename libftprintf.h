/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opaulman <opaulman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 14:19:18 by opaulman          #+#    #+#             */
/*   Updated: 2025/07/10 20:35:31 by opaulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include "Libft/libft.h"
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *s, ...);
int		ft_format(char *parameters, va_list fyuumi, int count);
int		ft_writestring(char *copy, va_list fyuumi, char *Parameters);
char	*ft_typeofparam(char *s, int size);
int		ft_paramcount(char *s);
int		ft_hex(va_list fyuumi, char *parameter, int count);

#endif