# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anzahoro <anzahoro@student.42berlin.d      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/20 20:29:30 by anzahoro          #+#    #+#              #
#    Updated: 2024/10/20 20:30:40 by anzahoro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=colle-2
CC=gcc -Wall -Wextra -Werror
SRCS=./srcs/main.c			\
	 ./srcs/rush02.c		\
	 ./srcs/ft_putchar.c	\
	 ./srcs/ft_putstr.c		\
	 ./srcs/ft_putnbr.c		\
	 ./srcs/check.c			\
	 ./srcs/alter_check.c	\
	 ./srcs/ft_strlen.c		\
	 ./srcs/reader.c
HEADERS=./includes

all: $(NAME)

$(NAME):
	$(CC) -o $(NAME) $(SRCS) -I $(HEADERS)

fclean:
	rm -rf $(NAME)

clean: fclean

re: fclean all


