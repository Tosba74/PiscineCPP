# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/15 18:43:38 by bmangin           #+#    #+#              #
#    Updated: 2022/02/16 14:51:53 by bmangin          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME				= Polymorphism

override PATH_S		:= .
override PATH_I		:= .
override PATH_O		:= .bin

override VPATH		:= .

FILES				:= main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp

OBJ					:= ${FILES:.cpp=.o}
OBJS				:= ${addprefix ${PATH_O}/, ${notdir ${OBJ}}}

HEADERS				= Animal.hpp Cat.hpp Dog.hpp Brain.hpp
HEADER				= ${addprefix ${PATH_I}/, ${HEADERS}}

CC					:=	c++
FLAGS				:=	-Wall -Wextra -Werror -std=c++98
CCF					:=	${CC} ${FLAGS}
CCFS				:=	${CCF} -g3 -fsanitize=address
INC					:=	-I${PATH_I}
RM					:=	rm -rf

all:		crea_b ${NAME}

${PATH_O}/%.o:	%.cpp ${HEADER}
		${CCF} ${INC} -c $< -o $@

${NAME}:	${OBJS} ${HEADER}
		${CCF} ${INC} ${OBJS} -o $@

fs:			${OBJS} ${HEADER}
		${CFFS} ${INC} ${OBJS} -o ${NAME}

crea_b :
		${shell mkdir -p ${PATH_O}}
	
clean:
		${RM} ${PATH_O}

fclean:		clean
		${RM} ${NAME}

re:			fclean all

seg:		fclean fs

.PHONY: all fs seg clean fclean re
