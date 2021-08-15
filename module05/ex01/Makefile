NAME = ex01

SRCS = main.cpp Bureaucrat.cpp Form.cpp

HEADER = Bureaucrat.hpp Form.hpp

CXXFLAGS = -g -Wall -Wextra -Werror -std=c++98

CXX = clang++

OBJS = $(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re