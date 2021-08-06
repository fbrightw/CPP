NAME = ex01

SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp

CXXFLAGS = -g -Wall -Wextra -Werror -std=c++98 -fsanitize=address

CXX = clang++

OBJS = $(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	@clang++ $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re