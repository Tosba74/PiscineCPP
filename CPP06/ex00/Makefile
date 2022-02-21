# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/17 08:22:46 by bmangin           #+#    #+#              #
#    Updated: 2022/02/14 22:48:51 by bmangin          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME	:= convert

FILE	:= main.cpp
OBJ		:= ${FILE:.cpp=.o}

CC		:= c++
FLAGS	:= -Wall -Wextra -Werror -std=c++98
CCF		:= $(CC) $(FLAGS)

all:	$(NAME)

${NAME}:	${FILE}
	$(CCF) -o $@ $<
	
clean:
	${RM} ${OBJ}

fclean:	clean
	${RM} ${NAME}

re : fclean all

.PHONY: all clean fclean re
	