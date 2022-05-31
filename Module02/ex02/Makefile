CC = c++
FLAGS = -Wall -Wextra -Werror -g
RM = rm -f

NAME = Fixed
SRCS = main.cpp Fixed.cpp
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