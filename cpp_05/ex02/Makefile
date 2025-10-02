NAME	=	THISWASTERRIBLE

SRC		=	Bureaucrat.cpp \
			AForm.cpp \
			main.cpp \
			ShrubberyCreationForm.cpp \
			RobotomyRequestForm.cpp \
			PresidentialPardonForm.cpp

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