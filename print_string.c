#include "libftprintf.h"


void set_spec_string(int length, char *str, ft_specs *spe)
{
    if (spe->prec > length)
        spe->prec = length;
    if (spe->fzer == 1)
        spe->fzer = 0;
    if (spe->width <= ((int)ft_strlen(str - spe->prec)))
        spe->width = 0;

}



void print_string(ft_specs *spe, va_list *argptr)
{
    char    *str;
    int     length;

    str = va_arg(*argptr, char *);
    if (!str)
    {
        str = "(null)";
        if (!IS_MACOS && spe->prec >= 0 && spe->prec < 6)
			str = "";
    }
    if (spe->prec == 0)
        str = "";
    length = (int)ft_strlen(str);
    set_spec_string(length, str, spe);
    if (spe->fmin != 1)
        print_not_minus(spe, str);
    else 
        print_minus(spe, str);
    spe->str++;
}