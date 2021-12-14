# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/05 16:43:42 by bmangin           #+#    #+#              #
#    Updated: 2021/12/14 08:37:59 by bmangin          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME				= Moar_brainz

override PATH_S		:= .
override PATH_I		:= .
override PATH_O		:= .bin

override VPATH		:= .

FILES				:= main.cpp Zombie.cpp ZombieHorde.cpp 

OBJ					:= ${FILES:.cpp=.o}
OBJS				:= ${addprefix ${PATH_O}/, ${notdir ${OBJ}}}

HEADER				= Zombie.hpp

CC					:=	clang++
FLAGS				:=	-Wall -Wextra -Werror -std=c++98
CCF					:=	${CC} ${FLAGS}
CCFS				:=	${CCF} -g3 -fsanitize=address
INC					:=	-I${HEADER}
RM					:=	rm -rf

all:		crea_b ${NAME}

${PATH_O}/%.o:	%.cpp ${HEADER}
		${CCF} ${INC} -c $< -o $@

${NAME}:	${OBJS} ${INCS}
		${CCF} ${INC} ${OBJS} -o $@

fs:			${OBJS} ${INCS}
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