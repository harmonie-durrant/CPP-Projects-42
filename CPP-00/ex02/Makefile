SRC =	Account.cpp	\
		tests.cpp	\

OBJ = $(SRC:.cpp=.o)

CC = g++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

NAME = account

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re