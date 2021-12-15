# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/05 16:43:42 by bmangin           #+#    #+#              #
#    Updated: 2021/12/15 15:14:39 by bmangin          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME				= test

override PATH_S		:= srcs
override PATH_I		:= .

override VPATH		:= ${PATH_S}

FILES				:= test.cpp Account.cpp
SRC					:= ${addprefix ${PATH_S}/, ${FILES}} \

OBJ					:= ${FILES:.cpp=.o}

HEADER				= Account.hpp
INCS				= ${addprefix ${PATH_I}/, ${HEADER}}

CC					:=	clang++
FLAGS				:=	-Wall -Wextra -Werror -std=c++98
CCF					:=	${CC} ${FLAGS}
CCFS				:=	${CCF} -g3 -fsanitize=address
INC					:= -I${PATH_I}
RM					:=	rm -rf

all:		${NAME}

%.o:	%.cpp ${HEADER}
		${CCF} ${INC} -c $< -o $@

${NAME}:	${OBJ} ${HEADER}
		${CCF} ${INC} ${OBJ} -o $@

fs:			${OBJ} ${HEADER}
		${CFFS} ${INC} ${OBJ} -o ${NAME}

clean:
		${RM} ${OBJ}

fclean:		clean
		${RM} ${NAME}

re:			fclean all

seg:		fclean fs

.PHONY: all fs seg clean fclean re
