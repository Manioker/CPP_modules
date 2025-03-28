# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anvacca <anvacca@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/12 13:18:39 by anvacca           #+#    #+#              #
#    Updated: 2025/03/12 15:17:50 by anvacca          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXE			:=	fragtrap

SRC			:=	main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

CC			:=	c++
CFLAGS		:=	-Wall -Wextra -Werror -std=c++98

all			:	${EXE}

${EXE}		:	${SRC}
				${CC} ${CFLAGS} ${SRC} -o ${EXE}

clean		:
				rm -rf ${EXE}

re			:	clean all

.PHONY		:	all clean re
