#include "ft_printf.h"

#define UBASE "0123456789ABCDEF"
#define LBASE "0123456789abcdef"

int	ft_putchar(int c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *s)
{
	int	count;

	count = 0;
	if (s == NULL)
		return (write(1, "(null)", 6));
	while (*s)
		count += write(1, (s++), 1);
	return (count);
}

int	ft_putptr(unsigned long p)
{
	int	cout;

	cout = 0;
	if (p != 0)
	{
		cout += ft_putstr("0x");
		cout += ft_puthex(p, 'x');
		return (cout);
	}
	return (ft_putstr("(nil)"));
}

int	ft_putnbr(int n)
{
	char	c;
	int		count;

	count = 0;
	if (n == -2147483648)
		return (write(1, "-2147483648", 11));
	if (n < 0)
	{
		write(1, "-", 1);
		count++;
		n = -n;
	}
	if (n > 9)
		count += ft_putnbr(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
	count++;
	return (count);
}

int	ft_unsigned(unsigned int n)
{
	char	c;
	int		count;

	count = 0;
	if (n > 9)
		count += ft_unsigned(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
	count++;
	return (count);
}

int	ft_puthex(unsigned long n, int isupper)
{
	int		count;
	char	*base;

	if (isupper == 'x')
		base = LBASE;
	else if (isupper == 'X')
		base = UBASE;
	count = 0;
	if (n < 16)
		count += ft_putchar((int)base[n]);
	else
	{
		count += ft_puthex(n / 16, isupper);
		count += ft_puthex(n % 16, isupper);
	}
	return (count);
}
