CC = clang++

NAME = karen

RM = rm -f

SRCS := main.cpp Karen.cpp

OBJS = $(SRCS:.cpp=.o)

all:	$(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
