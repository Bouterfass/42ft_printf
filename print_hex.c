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


void print_minus(ft_specs *spe, char *str)
{
 
    if (spe->prec >= 0)
    {
        if (spe->min == 1)
            ft_fill('-', 1);
        ft_fill('0', spe->fillzero);
        print_precision(str, spe->prec);
		print_width(spe, spe->prec);
    }
    else
    {
        if (spe->min == 1) 
            ft_fill('-', 1);
		ft_putstr(str);
		print_width(spe, ft_strlen(str));
    }
}

void	print_precision(char *str, int prec)
{
	int i;

	i = 0;
	while (i < prec && str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	print_not_minus(ft_specs *spe, char *str)
{
	if (spe->prec >= 0)
	{
		if (spe->fzer == 1 && spe->min == 1 && spe->width > 0)
		{
			spe->min = 0;
			ft_fill('-', 1);
		}
		print_width(spe, spe->prec);
		spe->min == 1 ? ft_fill('-', 1) : 0;
		ft_fill('0', spe->fillzero);
		print_precision(str, spe->prec);
	}
	else
	{
		if (spe->fzer == 1 && spe->min == 1 && spe->width > 0)
		{
			spe->min = 0;
			ft_fill('-', 1);
		}
		print_width(spe, (int)ft_strlen(str));
		spe->min == 1 ? ft_fill('-', 1) : 0;
		ft_putstr(str);
	}
}


void print_hex(ft_specs *spe, va_list *argptr)
{
    char *str;
    int length;
    unsigned int n;
    int null;

    n = va_arg(*argptr, unsigned int);
    null = n;
    if (n == 0)
        str = "0";
    else 
        str = from_int_to_hex(n);
    length = ft_strlen(str);
    if (spe->prec > length)
        spe->fillzero = spe->prec - length;
    remap_flags(length, str, spe);
    if (spe->fmin == 1)
        print_minus(spe, str);
    else 
        print_not_minus(spe, str);
    if (null == 0)
        free(str);
    spe->str++;
}