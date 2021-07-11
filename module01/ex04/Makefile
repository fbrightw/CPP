CC = clang++

NAME = strings

RM = rm -f

SRCS := main.cpp FileDealing.cpp

OBJS = $(SRCS:.cpp=.o)

all:	$(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME) text.replace

re:	fclean all

.PHONY:	all clean fclean re
