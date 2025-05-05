# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mogul <mogul@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/04 11:46:30 by mogul             #+#    #+#              #
#    Updated: 2025/03/04 14:42:00 by mogul            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXE		:=	Brainzz

SRC		:=	main.cpp Zombie.cpp	zombieHorde.cpp

CPP		:=	c++
CFLAGS	:=	-Wall -Werror -Wextra -std=c++98 #-fsanitize=address -g

all		:	${EXE}

${EXE}	:	${SRC}
			${CPP} ${CFLAGS} ${SRC} -o ${EXE}

clean	:
				rm -rf ${EXE}
				
re		:	clean all

.PHONY	:	all clean re
