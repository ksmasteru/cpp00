NAME = megaphone

SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

CC = g++

FLAGS = -Wall -Wextra -Werror

all	: $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $@

%.o	: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean:	clean
	rm -rf $(NAME)

re : fclean all