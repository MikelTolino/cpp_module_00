# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/01 11:26:13 by mmateo-t          #+#    #+#              #
#    Updated: 2022/03/10 20:11:35 by mmateo-t         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC:= clang++
SRCS_DIR.= ./
SRCS:= $(wildcard $(SRCS_DIR)*.cpp)
OBJS := $(SRCS:%.cpp=%.o)
CPPFLAGS:= -Wall -Werror -Wextra
CPPSTD:= -std=c++98
NAME:= phonebook

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
