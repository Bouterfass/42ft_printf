#include "libftprintf.h"



void ft_get_width(ft_specs *spe, va_list *argptr)
{
    if (ft_isdigit(*spe->str))
    {
        spe->width = 0;
        while (ft_isdigit(*spe->str))
        {
            spe->width *= 10;
            spe->width += *spe->str - '0';
           
            spe->str++; 
        }
    }
    else if (*spe->str == '*')
    {
        spe->str++;
        spe->width = va_arg(*argptr, int);
        if (spe->width < 0)
        {
            spe->width *= -1;
            spe->fmin = 1;
        }
    }
}