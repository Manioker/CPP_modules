# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mogul <mogul@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/04 14:43:50 by mogul             #+#    #+#              #
#    Updated: 2025/03/05 12:36:58 by mogul            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXE		:=	hi_brain

SRC		:=	main.cpp

CPP		:=	c++
CFLAGS	:=	-Wall -Werror -Wextra -std=c++98 #-fsanitize=address -g

all		:	${EXE}

${EXE}	:	${SRC}
			${CPP} ${CFLAGS} ${SRC} -o ${EXE}

clean	:
				rm -rf ${EXE}
				
re		:	clean all

.PHONY	:	all clean re
