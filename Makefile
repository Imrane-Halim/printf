CFLAGS = -Wall -Wextra -Werror
SRCS = ft_printf.c printf_utils.c
OBJS = $(SRCS:.c=.o)
NAME = libftprintf.a
INC = ft_printf.h

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o : %.c
	cc $(CFLAGS) -c $< -o $@

clean:
	rm -rf *.o 

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
