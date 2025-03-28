# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anvacca <anvacca@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/12 13:18:39 by anvacca           #+#    #+#              #
#    Updated: 2025/03/12 15:05:34 by anvacca          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXE			:=	scavtrap

SRC			:=	main.cpp ClapTrap.cpp ScavTrap.cpp

CC			:=	c++
CFLAGS		:=	-Wall -Wextra -Werror -std=c++98

all			:	${EXE}

${EXE}		:	${SRC}
				${CC} ${CFLAGS} ${SRC} -o ${EXE}

clean		:
				rm -rf ${EXE}

re			:	clean all

.PHONY		:	all clean re
