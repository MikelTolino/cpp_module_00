# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/01 11:26:13 by mmateo-t          #+#    #+#              #
#    Updated: 2022/03/01 11:29:11 by mmateo-t         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC:= clang++
CPPFLAGS:= -Wall -Werror -Wextra
CPPSTD:= -std=c++98
SRC:= megaphone.cpp
NAME:= megaphone

all:
	$(CC) $(CPPFLAGS) $(CPPSTD) $(SRC) -o $(NAME)

clean:
		rm $(NAME)

re:	clean all
