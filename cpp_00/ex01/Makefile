NAME	= phonebook

SRC		=	main.cpp \
			itoa.cpp \
			PhoneBook.cpp \
			Contact.cpp


OBJ		= $(SRC:.cpp=.o)

RM		= rm -f
CC		= g++
CFLAGS	= -Wall -Wextra -Werror -std=c++98 -g

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -O0 $(OBJ) -o $(NAME)

%.o:%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re