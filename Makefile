# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbaumgar <gbaumgar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/10 13:33:16 by gbaumgar          #+#    #+#              #
#    Updated: 2022/03/10 17:30:17 by gbaumgar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ft_printf.a

SRC		= ft_printf.c ft_printf_utils.c
BSRC	=
OBJS	= ${SRC:%.c=%.o}
BOBJS	= ${BSRC:%.c=%.o}


CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f

all: ${NAME}

${NAME}: ${OBJS}
	ar rc ${NAME} ${OBJS}

clean:
	${RM} ${OBJS} ${BOBJS}

fclean:	clean
	${RM} ${NAME}

re: fclean ${NAME}

bonus:	${BOBJS} ${OBJS}
	ar rc ${NAME} ${OBJS} ${BOBJS}