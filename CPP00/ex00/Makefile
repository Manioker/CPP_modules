# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mogul <mogul@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/27 15:11:43 by mogul             #+#    #+#              #
#    Updated: 2025/02/27 18:10:10 by mogul            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXE			:=	megaphone

SRC			:=	megaphone.cpp

CPP			:=	c++
CFLAGS		:=	-Wall -Wextra -Werror -std=c++98

all			:	${EXE}

${EXE}		:	${SRC}
				${CPP} ${CFLAGS} ${SRC} -o ${EXE}

clean		:
				rm -rf ${EXE}

re			:	clean all

.PHONY		:	all clean re
