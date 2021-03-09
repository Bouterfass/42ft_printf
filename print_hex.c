#include "libftprintf.h"


int ft_fill(char c, int n)
{
    int i;

    i = 0;
    while (i < n)
    {
        ft_putchar(c);
        i++;
    }
    return (i);
}





void print_hex(ft_specs *spe, va_list *argptr)
{
    char *str;
    int length;
    unsigned int n;

    n = va_arg(*argptr, unsigned int);
    if (n == 0)
    {
        str = "0";
        spe->hzer = 1;
    }
    else 
        str = ft_itox(n, spe);
    length = ft_strlen(str);
    if (spe->prec > length)
        spe->fillzero = spe->prec - length;
    set_spec(length, str, spe);
    if (spe->fmin == 1)
        print_minus(spe, str);
    else 
        print_not_minus(spe, str);
    if (spe->hzer == 0)
        free(str);
    spe->str++;
}