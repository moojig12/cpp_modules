# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: root <root@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/18 14:46:22 by nmandakh          #+#    #+#              #
#    Updated: 2025/02/23 16:25:17 by root             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = tarkov

SRCS = main.cpp \
		ClapTrap.cpp

CC = c++
CLAGS = -Wall -Wextra -Werror --std=98

OBJS=(.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -c $< -o $@

%.o:%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re