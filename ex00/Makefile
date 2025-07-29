NAME = ex00
SRC = main.cpp
HEADER = easyfind.hpp

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

$(NAME): $(SRC) $(HEADER)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

all: $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: all fclean re