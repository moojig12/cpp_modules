NAME = megaphone

CC = c++
FLAGS = -Wall -Wextra -Werror

SRCS = megaphone.cpp
OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $< -o $@

clean:
	rm -rf $(OBJ)