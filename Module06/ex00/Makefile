CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address
RM = rm -f

NAME = Convert
SRCS = main.cpp Convert.cpp

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