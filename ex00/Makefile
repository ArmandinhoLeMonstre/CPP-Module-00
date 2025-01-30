NAME = megaphone
CC = g++
CFLAGS = -Wall -Wextra -Werror -O3 #-fsanitize=address

RM = rm -rf

OBJ = megaphone.cpp

# HEAD = ./include/

all : $(NAME)

$(NAME) : $(OBJ)
	@echo "\033[0;33m\nCOMPILING MEGAPHONE...\n"
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "\033[1;32m./megaphone created\n"

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all