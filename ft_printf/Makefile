# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dde-carv <dde-carv@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/24 17:12:50 by dde-carv          #+#    #+#              #
#    Updated: 2024/05/13 16:24:52 by dde-carv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

SRCS	=	ft_printf.c \
		ft_digit.c \
		ft_text.c \
		ft_conversions.c

CC	=	@cc
CFLAGS	=	-Wall -Werror -Wextra
LIBFT_P	=	./libft
LIBFT	=	${LIBFT_P}/libft.a
OBJS	=	${SRCS:.c=.o}
RM	=	@rm -f
LIBC	=	@ar -rcs
INCS	=	.

${NAME}: ${OBJS} ${LIBFT}
	@echo "Created .o files."
	${LIBC} ${NAME} ${OBJS}

${LIBFT}:
	@cd ${LIBFT_P} && make all
	@cp ${LIBFT} ${NAME}

all: ${NAME}

clean:
	${RM} -f ${OBJS}
	@cd ${LIBFT_P} && make clean
	@echo "Cleaned .o files."

fclean: clean
	${RM} ${NAME}
	@cd ${LIBFT_P} && make fclean
	@echo "Cleaned .a files."

re: fclean all

.PHONY: all bonus fclean clean re .c.o
