NAME = PhoneBook
CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -O3

RM = rm -rf

OBJ = main.cpp PhoneBook.class.cpp Contact.class.cpp

all : $(NAME)

$(NAME) : $(OBJ)
	@echo "\033[0;33m\nCOMPILING PhoneBook...\n"
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "\033[1;32m./PhoneBook created\n"

clean :
	$(RM) PhoneBook

fclean : clean
	$(RM) PhoneBook

re : fclean all