# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/01 11:26:13 by mmateo-t          #+#    #+#              #
#    Updated: 2022/05/04 18:25:51 by mmateo-t         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC:= clang++
SRCS := megaphone.cpp
OBJS := $(SRCS:%.cpp=%.o)
CPPFLAGS:= -Wall -Werror -Wextra
CPPSTD:= -std=c++98
NAME:= megaphone
RM:= rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(CPPSTD) $(OBJS) -o $(NAME)

$(%.o): $(%.c)
	$(CC) $(CPPFLAGS) $(CPPSTD) -c $^ -o $@
	@echo "Creating objects"

clean:
		@echo "Cleaning objects"
		$(RM) $(OBJS)

fclean: clean
		@echo "Cleaning executable"
		$(RM) $(NAME)

re:	fclean all

.PHONY: all $(NAME) clean fclean re
