CC = c++
FLAGS = -Wall -Wextra -Werror -g -std=c++98
RM = rm -f

NAME = Convert
SRCS = main.cpp 
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