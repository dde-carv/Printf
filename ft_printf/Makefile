# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dde-carv <dde-carv@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/24 17:12:50 by dde-carv          #+#    #+#              #
#    Updated: 2024/05/02 15:10:33 by dde-carv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

SRCS	=	ft_printf.c \
		ft_digit.c \
		ft_text.c \
		ft_conversions.c

CC	=	@cc
CFLAGS	=	-Wall -Werror -Wextra
OBJS	=	${SRCS:.c=.o}
RM	=	@rm -f
LIBC	=	@ar -rcs
INCS	=	.

${NAME}: ${OBJS}
	@echo "Created .o files."
	${LIBC} ${NAME} ${OBJS}

all: ${NAME}

fclean: clean
	${RM} ${NAME}
	@echo "Cleaned libftprintf.a."

clean:
	${RM} -f ${OBJS} ${OBJS_B}
	@echo "Cleaned .o files."

re: fclean all

.PHONY: all bonus fclean clean re .c.o
