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

SRCLIBFTPRINTF = ft_printf.c main.c

CC = gcc

NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror

OBJPRINT = $(SRCLIBFTPRINTF:.c=.o)
OBJLIB = $(SRCLIBFT:.c=.o)

$(NAME): $(OBJ) ${OBJPRINT}
		make -C libft
		$(CC) $(CFLAGS) -I./libft -c $(SRCLIBFT)
		$(CC) $(CFLAGS) -I. -c $(SRCLIBFTPRINTF) -o ${NAME}
		ar rc $(NAME) $(OBJLIB) ${OBJPRINT}
		ranlib $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJLIB)
	rm -rf $(OBJPRINT)

fclean:	clean
	rm -rf $(NAME)

re: fclean all

.PHONY: re fclean clean name all
