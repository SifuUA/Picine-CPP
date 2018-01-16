#**************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vholovin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/09 11:36:50 by vholovin          #+#    #+#              #
#    Updated: 2017/10/30 18:55:52 by vholovin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME		=	PhoneBook

CC			=	clang++
FLAG		=	-Wall -Wextra -Werror

SRC			= 	main.cpp			\
				Phonebook.class.cpp
				
OBJ			= $(SRC:.cpp=.o)

all: $(NAME)

/%.o: src/%.cpp
	$(CC) $(FLAG) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(FLAG) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fcean re
