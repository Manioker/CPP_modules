# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mogul <mogul@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/06 13:27:24 by mogul             #+#    #+#              #
#    Updated: 2025/03/06 13:45:21 by mogul            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXE		:=	harl

SRC		:=	main.cpp Harl.cpp

CPP		:=	c++
CFLAGS	:=	-Wall -Werror -Wextra -std=c++98 #-fsanitize=address -g

all		:	${EXE}

${EXE}	:	${SRC}
			${CPP} ${CFLAGS} ${SRC} -o ${EXE}

clean	:
				rm -rf ${EXE}
				
re		:	clean all

.PHONY	:	all clean re
