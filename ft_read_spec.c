#include "libftprintf.h"


int  ft_read_spec(const char *s, int i, va_list *argptr)
{
int res;

res = 0;
if (s[i] == 'c')
    res += ft_putchar(va_arg(*argptr, int));
if (s[i] == 's')
    res += ft_putstr(va_arg(*argptr, char*));
if (s[i] == 'd')
    res += ft_putstr(ft_itoa(va_arg(*argptr, int)));
if (s[i] == 'x' || s[i] == 'X')
    res += ft_putstr(from_int_to_hex(va_arg(*argptr, int)));
 return (res);
}

    