/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libftprintf.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opaulman <opaulman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 14:19:18 by opaulman          #+#    #+#             */
/*   Updated: 2025/07/09 17:09:16 by opaulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFTPRINT_H
# define FT_LIBFTPRINT_H

# include "Libft/libft.h"
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *, ...);
int		ft_format(char *parameters, va_list fyuumi, int paramcount, int count);
void	ft_writestring(char *copy, int numofParameters, va_list fyuumi,
			char *Parameters);

#endif