# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/05 16:43:42 by bmangin           #+#    #+#              #
#    Updated: 2021/12/13 19:10:02 by bmangin          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME	:= megaphone

FILE	:= megaphone.cpp

CC		:= clang++

FLAGS	:= -Wall -Wextra -Werror

CCF		:= $(CC) $(FLAGS)

all:	$(NAME)

${NAME}:	${FILE}
	$(CCF) -o $@ $<
	
clean:
	rm -f ${FILE:.cpp=.o}

fclean:	clean
	rm -f $@

re : fclean all

.PHONY: all clean fclean re
	