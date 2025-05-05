# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mogul <mogul@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/05 13:22:52 by mogul             #+#    #+#              #
#    Updated: 2025/03/05 14:56:36 by mogul            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


EXE		:=	Unnecessary_violence

SRC		:=	main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

CPP		:=	c++
CFLAGS	:=	-Wall -Werror -Wextra -std=c++98 -fsanitize=address -g

all		:	${EXE}

${EXE}	:	${SRC}
			${CPP} ${CFLAGS} ${SRC} -o ${EXE}

clean	:
				rm -rf ${EXE}
				
re		:	clean all

.PHONY	:	all clean re
