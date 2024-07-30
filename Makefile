CFLAGS = -Wall -Wextra -Werror
SRCS = ft_printf.c ft_putchar.c ft_puthex.c ft_putnbr.c ft_putptr.c \
	   ft_putstr.c ft_unsigned.c
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
