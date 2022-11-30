# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: educlos <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/11 14:42:00 by educlos           #+#    #+#              #
#    Updated: 2022/11/30 18:24:08 by educlos          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_parser.c \
	ft_printf.c \
	ft_putnbr_base.c \
	ft_putnbr.c \
	ft_putnbrabs.c \
	ft_putstr.c
	


OBJ = $(SRC:.c=.o)


CC = gcc

NAME = libft_printf.a

CFLAGS =	-Wall -Wextra -Werror

all :	$(NAME)

$(NAME) : $(OBJ)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

clean :
		rm -f $(OBJ)

fclean : clean
		rm -f $(NAME)

re : fclean $(NAME)



.PHONY: all clean fclean re