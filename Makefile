# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: benjamin <benjamin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/07 15:34:06 by baubigna          #+#    #+#              #
#    Updated: 2022/01/08 14:25:14 by baubigna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap

GCC		= gcc

RM		= rm -rf

SRCS	= push_swap.c \
		  push_swap_op_1.c \
		  push_swap_op_2.c \
		  push_swap_op_3.c \
		  push_swap_utils_1.c \
		  push_swap_utils_2.c \
		  push_swap_utils_3.c \
		  push_swap_utils_4.c

OBJS	= ${SRCS:.c=.o}

${NAME}:
	${GCC} ${GFLAGS} ${SRCS} -o ${NAME}

GFLAGS	= -Wall -Werror -Wextra

all:	${NAME}
	
.c.o:
	$(GCC) $(GFLAGS) -c $< -o ${<:.c=.o}

clean:
	${RM} ${OBJS}

fclean:		clean
	${RM} ${NAME}

re:			fclean all
