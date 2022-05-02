CC = c++
FLAGS = -Wall -Wextra -Werror
RM = rm -f

NAME = Zombie
SRCS = main.cpp randomChump.cpp newZombie.cpp Zombie.cpp
OBJS = $(SRCS:.cpp=.o)

all = $(NAME)

$(NAME):
		$(CC) $(SRCS) $(FLAGS) -o $(NAME)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re