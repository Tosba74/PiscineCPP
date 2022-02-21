# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/05 16:43:42 by bmangin           #+#    #+#              #
#    Updated: 2022/02/14 22:48:51 by bmangin          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME				= phonebook

override PATH_S		:= srcs
override PATH_I		:= includes
override PATH_C		:= class
override PATH_O		:= .bin

override VPATH		:= ${PATH_O} ${PATH_S} ${PATH_S}/${PATH_C}

FILES				:= main.cpp
CLASS				:= Contact.cpp Phonebook.cpp
SCLASS				:= ${addprefix ${PATH_C}/, ${CLASS}}
SRC					:= ${addprefix ${PATH_S}/, ${FILES}} \
					${addprefix ${PATH_S}/, ${SCLASS}}

OBJ					:= ${SRC:.cpp=.o}
OBJS				:= ${addprefix ${PATH_O}/, ${notdir ${OBJ}}}

HEADER				= Contact.hpp Phonebook.hpp
INCS				= ${addprefix ${PATH_I}/, ${HEADER}}

CC					:=	c++
FLAGS				:=	-Wall -Wextra -Werror -std=c++98
CCF					:=	${CC} ${FLAGS}
CCFS				:=	${CCF} -g3 -fsanitize=address
INC					:=	-I ${PATH_I}
RM					:=	rm -rf

all:		crea_b ${NAME}

${PATH_O}/%.o:	%.cpp ${INCS}
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
