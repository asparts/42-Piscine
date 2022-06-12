# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mnummi <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/02 22:03:48 by mnummi            #+#    #+#              #
#    Updated: 2022/06/07 18:40:03 by mnummi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
CFLAGS = -Wall -Wextra -Werror
LIB = ranlib
AR = ar rc
CC = gcc
RM = rm -f

OBJS = ${SRC:.c=.o}

.c.o:
	${CC} ${CFLAGS} -I includes -c $< -o ${<:.c=.o}

$(NAME): $(OBJS)
	${AR} ${NAME} ${OBJS}
	$(LIB) $(NAME)

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY:	all	clean	fclean	re
