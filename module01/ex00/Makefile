CC = clang++

NAME = zombies

RM = rm -f

SRCS := main.cpp Zombie.cpp randomChump.cpp newZombie.cpp

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
