# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/01 11:26:13 by mmateo-t          #+#    #+#              #
#    Updated: 2022/03/08 01:51:39 by mmateo-t         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC:= clang++
SRCS := megaphone.cpp

OBJS := $(SRCS:%.cpp=%.o)
CPPFLAGS:= -Wall -Werror -Wextra
CPPSTD:= -std=c++98
NAME:= megaphone

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(CPPSTD) $(OBJS) -o $(NAME)

$(%.o): $(%.c)
	$(CC) -c $^ -o $@
	@echo "Creating objects"

clean:
		rm $(OBJS)
		@echo "Cleaning objects"

fclean: clean
		rm $(NAME)

re:	fclean all

.PHONY: all $(NAME) clean fclean re
