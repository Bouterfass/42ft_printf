#include "libftprintf.h"

// remidner : faire deux conditions en une
void remap_flags(int length, char *str, ft_specs *spe)
{
    if (spe->prec > -1 && spe->prec < length && *str != '0')
        spe->prec = length;
    if ((spe->fzer == 1 && spe->fmin == 1 && spe->type == 3)
    || (spe->fzer == 1 && spe->type == 2))
        spe->fzer = 0;
    if (spe->prec >= 0 && spe->fzer == 1)
        spe->fzer = 0;
    if (spe->fmin == 1 && spe->fzer == 1)
        spe->fzer = 0;
    if ((spe->type == 2 || spe->type == 3) && spe->width <= 1)
        spe->width = 0;
    if (spe->type == 1 && *str != '0' && spe->width == length)
        spe->width = 0;
    
}


void print_width(ft_specs *spe, int length)
{
    while (spe->width != 0 && spe->width > length)
    {
        if (spe->fzer != 1)
        {
            spe->read++;
            ft_putchar(' ');
        }
        else 
        {
            spe->read++;
            ft_putchar('0');
        }
        spe->width--;
    }
}


// est ce qu'on peut enlever la variable res et mettre que putchar?
void print_char(ft_specs *spe, va_list *argptr)
{
    char c;
  
    spe->type = 2;
    c = va_arg(*argptr, int);
    remap_flags(0, 0, spe);
    if (spe->fmin != 1)
    {
        print_width(spe, 1);
        spe->read += ft_putchar(c);
    }
    else 
    {
        spe->read += ft_putchar(c);
        print_width(spe, 1);
    }
    spe->str++;
}