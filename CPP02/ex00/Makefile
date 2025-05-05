# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mogul <mogul@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/10 14:52:19 by mogul             #+#    #+#              #
#    Updated: 2025/03/10 14:52:44 by mogul            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXE		:=	Fixed

SRC		:=	main.cpp Fixed.cpp

CPP		:=	c++
CFLAGS	:=	-Wall -Werror -Wextra -std=c++98 #-fsanitize=address -g

all		:	${EXE}

${EXE}	:	${SRC}
			${CPP} ${CFLAGS} ${SRC} -o ${EXE}

clean	:
				rm -rf ${EXE}
				
re		:	clean all

.PHONY	:	all clean re
