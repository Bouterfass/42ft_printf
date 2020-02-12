# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yobouter <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/19 15:18:05 by yobouter          #+#    #+#              #
#    Updated: 2019/12/19 17:36:09 by yobouter         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_printf.c ft_printf_utils.c main.c

CC = gcc

NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror

OBJS = $(SRCS:.c=.o)

INC = -I libft/libft.h

LIB = -L libft -lft

$(NAME): $(OBJ) ${OBJPRINT}
		make -C libft
		$(CC) $(CFLAGS) -c $(SRCS) $(INC)
		$(CC) $(CFLAGS) $(INC) $(OBJS) $(LIB) -o $(NAME)
		ar rc $(NAME) $(OBJS)
		ranlib $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJS)
	make -C libft clean

fclean:	clean
	rm -rf $(NAME)
	make -C libft fclean

re: fclean all

.PHONY: re fclean clean name all
