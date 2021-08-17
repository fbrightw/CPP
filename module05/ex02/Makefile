NAME = ex02

SRCS = main.cpp Bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp ShrubberyCreationForm.cpp  RobotomyRequestForm.cpp 

HEADER = Bureaucrat.hpp Form.hpp PresidentialPardonForm.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp

CXXFLAGS = -g -Wall -Wextra -Werror 

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