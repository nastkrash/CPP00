C++_FLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
SOURCES = Contact.cpp PhoneBook.cpp main.cpp

OBJ = $(SOURCES:.cpp=.o)

NAME = phonebook

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(C++_FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	c++ $(C++_FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re