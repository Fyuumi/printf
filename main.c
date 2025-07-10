/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opaulman <opaulman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 20:50:16 by opaulman          #+#    #+#             */
/*   Updated: 2025/07/10 21:04:30 by opaulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	main(void)
{
	int printlen;
	int ft_print;
	void *ptr;
	unsigned int wupp;

	wupp = 142000;
	// ft_print = ft_printf("hey ich bin der stringf %s% i 123", "heyho", 321);
	// printf("\n");
	// printlen = printf("hey ich bin der stringp %s% i 123", "heyho", 321);
	// printf("\nlaenge des strings ft %d\n", ft_print);
	// printf("laenge des strings pt %d\n", printlen);

	ptr = malloc(1);
	ft_printf("my void pointer%p\n", ptr);
	printf("void pointer belik%p\n", ptr);
	printf("xp %x\n", wupp);
	ft_printf("xf %x\n", wupp);
	printf("Xp %X\n", wupp);
	ft_printf("Xf %X\n", wupp);
	printf("up %u\n", wupp);
	ft_printf("uf %u\n", wupp);
}