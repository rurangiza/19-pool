# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/24 17:46:54 by arurangi          #+#    #+#              #
#    Updated: 2022/08/25 20:32:46 by arurangi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OBJS = ${SRCS:.c=.o}
HEADER = includes/
LIBC = ar rc
LIBR = ranlib
CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f


.c.o:
    ${CC} ${CFLAGS} -I ${HEADER} -c $< -o ${<:.c=.o}

${NAME}:    ${OBJS}
            ${LIBC} ${NAME} ${OBJS}
            ${LIBR} ${NAME}

all: ${NAME}

clean :
    ${RM} ${OBJS}

fclean: clean
    $(RM) ${NAME}

re: fclean all