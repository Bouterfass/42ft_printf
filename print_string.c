#include "libftprintf.h"


void remap_flags_string(int length, char *str, ft_specs *spe)
{
    if (spe->prec > length)
        spe->prec = length;
    if (spe->fzer == 1)
        spe->fzer = 0;
    if (spe->width <= ft_strlen(str - spe->prec))
        spe->width = 0;
}



void print_string(ft_specs *spe, va_list *argptr)
{
    char *str;
    int length;

    str = va_arg(*argptr, char *);
    if (!str)
        str = "(null)";
    if (spe->prec == 0)
        str = "";
    length = ft_strlen(str);
    remap_flags_string(length, str, spe);
    if (spe->fmin != 1)
        print_not_minus(spe, str);
    else 
        print_minus(spe, str);
    spe->str++;
}