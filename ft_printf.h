#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <string.h>
# include <unistd.h>

int	ft_printf(const char *string, ...);
int	ft_print_format(const char s, va_list *args);

int	ft_putchar(int c);
int	ft_putstr(char *s);
int	ft_putptr(unsigned long p);
int	ft_putnbr(int n);
int	ft_puthex(unsigned long n, int isupper);
int	ft_unsigned(unsigned int n);

#endif
