#include "libftprintf.h"


void ft_get_prec(ft_specs *spe, va_list *argptr)
{
    if (*spe->str == '.')
    {
        spe->str++;
        if (ft_isdigit(*spe->str))
        {
            spe->prec = 0;
            while (ft_isdigit(*spe->str))
            {
                spe->prec *= 10;
                spe->prec += *spe->str - '0';
                spe->str++;
            }
        }
        else if (*spe->str == '*')
        {
            spe->str++;
            spe->prec = va_arg(*argptr, int);
        }
        else 
            spe->prec = 0;
    }
}