# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/05 16:43:42 by bmangin           #+#    #+#              #
#    Updated: 2021/12/13 18:39:50 by bmangin          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME				= BraiiiiiiinnnzzzZ

override PATH_S		:= .
override PATH_I		:= .
override PATH_O		:= .bin

override VPATH		:= ${PATH_S}

FILES				:= main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
SRC					:= ${addprefix ${PATH_S}/, ${FILES}} \

OBJ					:= ${FILES:.cpp=.o}
OBJS				:= ${addprefix ${PATH_O}/, ${notdir ${OBJ}}}

HEADER				= Zombie.hpp
INCS				= ${addprefix ${PATH_I}/, ${HEADER}}

CC					:=	clang++
FLAGS				:=	-Wall -Wextra -Werror -std=c++98
CCF					:=	${CC} ${FLAGS}
CCFS				:=	${CCF} -g3 -fsanitize=address
INC					:= -I${PATH_I}
RM					:=	rm -rf

all:		crea_b ${NAME}

${PATH_O}/%.o:	%.cpp ${INCS}
		${CCF} ${INC} -c ${SRC} -o $@

${NAME}:	${OBJ} ${INCS}
		${CCF} ${INC} ${OBJ} -o $@

fs:			${OBJS} ${INCS}
		${CFFS} ${INC} ${OBJ} -o ${NAME}

crea_b :
		${shell mkdir -p ${PATH_O}}
	
clean:
		${RM} ${PATH_O}

fclean:		clean
		${RM} ${NAME}

re:			fclean all

seg:		fclean fs

.PHONY: all fs seg clean fclean re