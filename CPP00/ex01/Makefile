# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mogul <mogul@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/27 19:30:02 by mogul             #+#    #+#              #
#    Updated: 2025/02/28 12:36:35 by mogul            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXE			:=	phonebook

SRC			:=	main.cpp		\
				PhoneBook.cpp	\
				Contact.cpp		\

CPP			:=	c++
CFLAGS		:=	-Wall -Wextra -Werror -std=c++98

all			:	${EXE}

${EXE}		:	${SRC}
				${CPP} ${CFLAGS} ${SRC} -o ${EXE}

clean		:
				rm -rf ${EXE}

re			:	clean all

.PHONY		:	all clean re
