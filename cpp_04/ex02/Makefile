# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: root <root@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/14 12:27:08 by nmandakh          #+#    #+#              #
#    Updated: 2025/03/05 22:01:39 by root             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= cats_n_dogs

SRC		=	main.cpp \
			Animal.cpp \
			Cat.cpp \
			Dog.cpp \
			WrongCat.cpp \
			WrongAnimal.cpp \
			Brain.cpp

OBJ		= $(SRC:.cpp=.o)

RM		= rm -f
CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o:%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re