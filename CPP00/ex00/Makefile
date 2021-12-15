# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/05 16:43:42 by bmangin           #+#    #+#              #
#    Updated: 2021/12/14 14:56:38 by bmangin          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME	:= megaphone

FILE	:= megaphone.cpp
OBJ		:= ${FILE:.cpp=.o}

CC		:= clang++
FLAGS	:= -Wall -Wextra -Werror -std=c++98
CCF		:= $(CC) $(FLAGS)
RM		:= rm -f

all:	$(NAME)

${NAME}:	${FILE}
	$(CCF) -o $@ $<
	
clean:
	rm -f ${FILE:.cpp=.o}

fclean:	clean
	rm -f ${NAME}

re : fclean all


.PHONY: all clean fclean re
	
