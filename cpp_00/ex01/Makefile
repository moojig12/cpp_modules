NAME = phonebook

CC = c++
FLAGS = -Wall -Wextra -Werror

SRCS = phonebook.cpp
OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $< -o $@

clean:
	rm $(NAME)

.PHONY: all clean