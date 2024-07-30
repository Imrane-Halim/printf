#include "printf.h"

int	ft_printf(const char *string, ...)
{
	va_list	args;
	int		count;

	count = 0;
	va_start(args, string);
	while (*string != '\0')
	{
		if (*string == '%')
			count += ft_print_format(*(++string), &args);
		else
			count += write(1, string, 1);
		string++;
	}
	va_end(args);
	return (count);
}
