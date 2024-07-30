#include "ft_print_format.c"
#include "ft_printf.c"
#include "printf.h"
#include "printf_utils.c"
#include <limits.h>
#include <stdio.h>

int	main(void)
{
	printf(" %p %i \n", 0, INT_MIN);
	ft_printf(" %p %p \n", 0, 0);
}
