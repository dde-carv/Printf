# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dde-carv <dde-carv@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/24 17:12:50 by dde-carv          #+#    #+#              #
#    Updated: 2024/04/26 17:19:02 by dde-carv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

SRCS	=

CC	=	@cc
CFLAGS	=	-Wall -Wextra -Werror
OBJS	=	${SRCS:.c=.o}
RM	=	rm -f
LIBC	=	@ar -rcs
INCS	=	.

${NAME} : ${OBJS}
	@echo "Created .o files."
	${LIBC} ${NAME} ${OBJS}

all: ${NAME}

clean: ${RM} -f ${OBJS}
	@echo "Cleaned .o files."

fclean: ${RM} ${NAME}
	@echo "Cleaned libftprintf.a."

re: fclean all

.PHONY: all bonus clean fclean re .c.o