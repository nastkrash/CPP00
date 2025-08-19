C++_FLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
SOURCES = megaphone.cpp

OBJ = $(SOURCES:.cpp=.o)

NAME = megaphone

all: $(NAME)

$(NAME):$(OBJ)
	c++ $(C++_FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	c++ $(C++_FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re