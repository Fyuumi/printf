/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opaulman <opaulman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 20:21:53 by opaulman          #+#    #+#             */
/*   Updated: 2025/06/17 21:27:53 by opaulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

// int main()
// {
// 	char *s;
// 	s = "hey";
// 	char laenge;
// 	laenge = ft_strlen(s);
// 	write(1, laenge, 1);
// 	return(0);
// }