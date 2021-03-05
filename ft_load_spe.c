#include "libftprintf.h"



int ft_load_spe(ft_specs *spe, const char *s, int i, va_list *argptr)
{
    ft_init_spec(spe);
    i += ft_get_str(spe, s, i);
    ft_get_flag(spe);
    ft_get_width(spe, argptr);
    ft_get_prec(spe, argptr);
    ft_get_type(spe, argptr);
    return (i);
}