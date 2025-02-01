NAME = megaphone
CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -O3

RM = rm -rf

OBJ = megaphone.cpp

all : $(NAME)

$(NAME) : $(OBJ)
	@echo "\033[0;33m\nCOMPILING MEGAPHONE...\n"
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "\033[1;32m./megaphone created\n"

clean :
	$(RM) megaphone

fclean : clean
	$(RM) megaphone

re : fclean all