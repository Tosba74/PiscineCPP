# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/21 23:59:02 by bmangin           #+#    #+#              #
#    Updated: 2022/01/22 00:48:33 by bmangin          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME				= Bureaucrat

override PATH_S		:= .
override PATH_I		:= .
override PATH_O		:= .bin

override VPATH		:= .

FILES				:= main.cpp Bureaucrat.cpp

OBJ					:= ${FILES:.cpp=.o}
OBJS				:= ${addprefix ${PATH_O}/, ${notdir ${OBJ}}}

HEADERS				= Bureaucrat.hpp
HEADER				= ${addprefix ${PATH_I}/, ${HEADERS}}

CC					:=	clang++
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
