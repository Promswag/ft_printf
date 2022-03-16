# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbaumgar <gbaumgar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/10 13:33:16 by gbaumgar          #+#    #+#              #
#    Updated: 2022/03/16 17:55:09 by gbaumgar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= libftprintf.a

LIBFT			= libft.a
LIBFT_DIR 		= ./libft/

INCLUDE_DIR 	= ./include/
SRC_DIR 		= ./src/
OUT_DIR			= ./
SRC				=	ft_printf.c ft_printf_utils.c\
					ft_printf_display_char.c ft_printf_display_str.c ft_printf_display_ptr.c\
					ft_printf_display_int.c ft_printf_display_uint.c ft_printf_display_hex.c
OBJS			= ${SRC:%.c=${OUT_DIR}%.o}

AR				= ar rc
CC				= gcc
# CFLAGS			= -Wall -Wextra -Werror -I${INCLUDE_DIR} -I${LIBFT_DIR}
CFLAGS			= -Wall -Wextra -Werror -I${INCLUDE_DIR}
RM				= rm -f

all: ${NAME}

$(NAME): ${OBJS} $(LIBFT)
	${AR} ${NAME} ${OBJS} 

$(LIBFT):
	$(MAKE) -C ${LIBFT_DIR}

${OUT_DIR}%.o: ${SRC_DIR}%.c 
	${CC} ${CFLAGS} $< -c -o $@

clean:
	$(MAKE) clean -C ${LIBFT_DIR}
	${RM} ${OBJS} ${BOBJS}

fclean:	clean
	$(MAKE) fclean -C ${LIBFT_DIR}
	${RM} ${NAME}

re: fclean ${NAME}

bonus:	${BOBJS} ${OBJS}
	ar rc ${NAME} ${OBJS} ${BOBJS}