#include "libftprintf.h"


void ft_read_string(const char *s, va_list argptr)
{

    int i = 0;
    int j = 0;
    ft_specs spe;

    spe = ft_init_spec();
    while (s[i])
    {
        j = i + 1;
        if ((s[i] == '%') && s[j])
        {
            if (ft_is_valid_type(s[j]))
            {
                if (s[j] == 'd'){
                    ft_putstr(ft_itoa(va_arg(argptr, int)));
                    i++;
                }
                if (s[j] == 'c'){
                    ft_putchar(va_arg(argptr, int));
                    i++;
                }
                if (s[j] == 's') {
                    ft_putstr(va_arg(argptr, char*));
                    i++;
                }
            }
        }
        else {
            ft_putchar(s[i]);
        }
        i++;
    }
}