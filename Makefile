CFLAGS = -Wall -Wextra -Werror -I inc
SRCS = $(wildcard src/*.c)
OBJS = $(SRCS:.c=.o)
NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o : %.c
	cc $(CFLAGS) -c $< -o $@

clean:
	rm -rf src/*.o 

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
