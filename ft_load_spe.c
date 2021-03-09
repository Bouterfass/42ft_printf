#include "libftprintf.h"



void ft_load_spe(ft_specs *spe, va_list *argptr)
{
    spe->str++;
    ft_init_spec(spe);
    ft_get_flag(spe);
    ft_get_width(spe, argptr);
    ft_get_prec(spe, argptr);
    ft_get_type(spe, argptr);

}