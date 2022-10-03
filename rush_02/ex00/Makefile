# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/21 09:35:45 by arurangi          #+#    #+#              #
#    Updated: 2022/08/21 09:43:32 by arurangi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
OBJS		= $(addprefix srcs/, ${SRCS:.c=.o})
NAME		= libft.a
.c.o:
			gcc -Wall -Wextra -Werror -c -I./includes $< -o ${<:.c=.o}
${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}
all:		${NAME}
clean:
			rm -f ${OBJS}
fclean:		clean
			rm -f ${NAME}
re:			fclean all
.PHONY:		all clean fclean re