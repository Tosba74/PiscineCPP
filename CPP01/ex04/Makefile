# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/17 08:22:46 by bmangin           #+#    #+#              #
#    Updated: 2021/12/17 09:07:13 by bmangin          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME	:= replace

FILE	:= main.cpp
OBJ		:= ${FILE:.cpp=.o}

CC		:= clang++
FLAGS	:= -Wall -Wextra -Werror -std=c++98
CCF		:= $(CC) $(FLAGS)

all:	$(NAME)

${NAME}:	${FILE}
	$(CCF) -o $@ $<
	
clean:
	${RM} ${FILE:.cpp=.o}

fclean:	clean
	${RM} ${NAME}

re : fclean all


.PHONY: all clean fclean re
	