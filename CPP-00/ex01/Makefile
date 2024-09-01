SRC =	main.cpp						\
		Contact/Contact.cpp				\
		Contact/Contact_getters.cpp		\
		Contact/Contact_setters.cpp		\
		Phonebook/Phonebook.cpp			\
		Phonebook/Phonebook_getters.cpp	\
		Phonebook/Phonebook_setters.cpp	\

SRC	:= $(addprefix src/, $(SRC))

OBJ = $(SRC:.cpp=.o)

CC = g++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic -I./include

NAME = phonebook

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re