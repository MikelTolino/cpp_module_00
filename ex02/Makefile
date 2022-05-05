# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/01 11:26:13 by mmateo-t          #+#    #+#              #
#    Updated: 2022/05/05 13:27:12 by mmateo-t         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC:= clang++
SRCS:= $(wildcard *.cpp)
OBJS := $(SRCS:%.cpp=%.o)
CPPFLAGS:= -Wall -Werror -Wextra
CPPSTD:= -std=c++98
NAME:= AccountTest
LOGNAME:= mylog.txt

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(CPPSTD) $(OBJS) -o $(NAME)

$(%.o): $(%.c)
	@echo "Creating objects"
	$(CC) -c $^ -o $@

diff:
	./$(NAME) > $(LOGNAME); diff -w log.txt $(LOGNAME)

clean:
	@echo "Cleaning objects"
	rm -f $(OBJS)

fclean: clean
	@echo "Cleaning $(NAME) $(LOGNAME)"
	rm -f $(NAME) $(LOGNAME)

re:	fclean all

.PHONY: all $(NAME) clean fclean re
