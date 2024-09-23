SRC =	main.cpp		\
		Fixed.cpp		\
		Point.cpp		\
		bsp.cpp		\

OBJ = $(SRC:.cpp=.o)

CC = g++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = bsp

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re