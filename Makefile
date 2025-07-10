# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: opaulman <opaulman@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/04 14:17:37 by opaulman          #+#    #+#              #
#    Updated: 2025/07/10 21:04:00 by opaulman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c ft_format.c ft_paramcount.c ft_typeofparam.c ft_writestring.c \
	ft_hex.c
OBJ = $(SRC:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBFT = Libft
LIBFT_MAKE = make -C $(LIBFT)

all:	$(NAME)

$(NAME):	$(OBJ)	$(LIBFT)/libft.a
		cp $(LIBFT)/libft.a $(NAME)
		ar rcs $(NAME) $(OBJ)

$(LIBFT)/libft.a:
				$(LIBFT_MAKE)
%.o: %.c
	$(CC)	$(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
	$(LIBFT_MAKE) clean
fclean: 
	rm -f $(NAME) $(OBJ)
	$(LIBFT_MAKE) fclean
re:
	$(MAKE) fclean
	$(MAKE) all

.PHONY: all clean fclean re bonus