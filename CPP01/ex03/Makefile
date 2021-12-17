# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/15 18:43:38 by bmangin           #+#    #+#              #
#    Updated: 2021/12/16 21:31:17 by bmangin          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME				= Unnecessary_violence

override PATH_S		:= .
override PATH_I		:= .
override PATH_O		:= .bin

override VPATH		:= .

FILES				:= main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

OBJ					:= ${FILES:.cpp=.o}
OBJS				:= ${addprefix ${PATH_O}/, ${notdir ${OBJ}}}

HEADER				= Weapon.hpp HumanA.hpp HumanB.hpp

CC					:=	clang++
FLAGS				:=	-Wall -Wextra -Werror -std=c++98
CCF					:=	${CC} ${FLAGS}
CCFS				:=	${CCF} -g3 -fsanitize=address
INC					:=	-I${PATH_I}
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