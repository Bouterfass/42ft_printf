#include "libftprintf.h"


void print_char(ft_specs *spe, va_list *argptr)
{
    char c;
  
    spe->type = 2;
    c = va_arg(*argptr, int);
    set_spec(0, 0, spe);
    if (spe->fmin != 1)
    {
        print_width(spe, 1);
        spe->printed += ft_fill(c, 1);
    }
    else 
    {
        spe->printed += ft_fill(c, 1);
        print_width(spe, 1);
    }
    spe->str++;
}