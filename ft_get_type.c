#include "libftprintf.h"


void ft_get_type(ft_specs *spe, va_list *argptr)
{
    if (*spe->str == 'x' || *spe->str == 'X')
        print_hex(spe, argptr);
    else if (*spe->str == 'd' || *spe->str =='i')
    {
        spe->type = 1;
        print_int(spe, argptr);
    }
    else if (*spe->str == 'c')
        print_char(spe, argptr);
    else if (*spe->str == 's')
        print_string(spe, argptr);
    else if (*spe->str == 'p')
        print_ptr(spe, argptr);
    else if (*spe->str == 'u')
        print_unsigned(spe, argptr);
    else if (*spe->str == '%')
        print_percent(spe);
    else
        ft_putstr("error");
    
}