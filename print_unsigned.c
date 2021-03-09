#include "libftprintf.h"

void print_unsigned(ft_specs *spe, va_list *argptr)
{
    char *str; 
    int length; 

    str = ft_utoa(va_arg(*argptr, unsigned int));
    length = ft_strlen(str);
    if (spe->prec > length)
        spe->fillzero = spe->prec - length;
    set_spec(length, str, spe);
    if (spe->fmin != 1)
        print_not_minus(spe, str);
    else
        print_minus(spe, str);
    free(str);
    spe->str++;
}