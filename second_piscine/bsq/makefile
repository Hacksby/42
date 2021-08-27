# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alsilvan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/15 14:30:53 by alsilvan          #+#    #+#              #
#    Updated: 2021/07/15 14:36:14 by alsilvan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_check_valid.c ft_reader.c main.c

OBJS	= ${SRCS:.c=.o}

NAME	= bsq

CC		= gcc

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

.o:		.c
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:		${OBJS}
				${CC} -o ${NAME} ${OBJS}

all:	${NAME}

clean:
		rm ${OBJS}

fclean:	clean
				rm ${NAME}

.PHONY: all clean fclean re
