#include "libftprintf.h"


int negative_handler(int n, ft_specs *spe)
{
    if (n < 0)
    {
        if (n == -2147483648)
            spe->min = 0;
        else 
        {
            spe->min = 1;
            spe->width -= 1; 
            n *= -1;
        }
    }
    return (n);
}

void min_and_zero(ft_specs *spe, char *str, int k)
{
    spe->read += ft_putchar('-');
    spe->read += ft_fill('0', k);
    print_precision(str + 1, 10);
}


void print_int(ft_specs *spe, va_list *argptr)
{
    int n;
    char *str;
    int k;

    k = 0;
    n = va_arg(*argptr, int);
    n = negative_handler(n, spe);
    str = ft_itoa(n);
    if (spe->width > ft_strlen(str))
        k = spe->width - ft_strlen(str);
    if (spe->prec > ft_strlen(str))
        spe->fillzero = spe->prec - ft_strlen(str);
    remap_flags(ft_strlen(str), str, spe);
    if (spe->fmin == 0 && n == -2147483648 && spe->fzer == 1 && k > 0)
        min_and_zero(spe, str, k);
    else if (spe->fmin == 1)
        print_minus(spe, str);
    else
        print_not_minus(spe ,str);
    free(str);
    spe->str++;
}