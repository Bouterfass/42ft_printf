#include "libftprintf.h"


/* ICI JAI UN - APRES LE %

    SI PRECISION >= 0
        SI JAI UN NOMBRE NEGATIF JE PRINT UN -000123000

*/

void print_minus(ft_specs *spe, char *str)
{
 
    if (spe->prec >= 0)
    {
        if (spe->min == 1)
           spe->printed += ft_fill('-', 1);
        spe->printed += ft_fill('0', spe->fillzero);
        print_precision(str, spe->prec, spe);
		print_width(spe, spe->prec);
    }
    else
    {
        if (spe->min == 1) 
           spe->printed += ft_fill('-', 1);
		ft_putstr(str);
		print_width(spe, ft_strlen(str));
        spe->printed += ft_strlen(str);
    }
}





void	print_not_minus(ft_specs *spe, char *str)
{
	if (spe->prec >= 0)
	{
		if (spe->fzer == 1 && spe->min == 1 && spe->width > 0)
		{
			spe->min = 0;
			spe->printed += ft_fill('-', 1);
		}
		print_width(spe, spe->prec);
		spe->min == 1 ? spe->printed += ft_fill('-', 1) : 0;
		spe->printed += ft_fill('0', spe->fillzero);
		print_precision(str, spe->prec, spe);
	}
	else
	{
		if (spe->fzer == 1 && spe->min == 1 && spe->width > 0)
		{
			spe->min = 0;
			spe->printed += ft_fill('-', 1);
		}
		print_width(spe, (int)ft_strlen(str));
		spe->min == 1 ? spe->printed += ft_fill('-', 1) : 0;
		ft_putstr(str);
        spe->printed += ft_strlen(str);
	}
}

void	print_precision(char *str, int prec, ft_specs *spe)
{
	int i;

	i = 0;
	while (i < prec && str[i])
	{
		ft_putchar(str[i]);
        spe->printed++;
		i++;
	}
}

void print_width(ft_specs *spe, int length)
{
    while (spe->width != 0 && spe->width > length)
    {
        if (spe->fzer != 1)
        {
            spe->printed++;
            ft_putchar(' ');
        }
        else 
        {
            spe->printed++;
            ft_putchar('0');
        }
        spe->width--;
    }
}

void set_spec(int length, char *str, ft_specs *spe)
{
    if (spe->prec > -1 && spe->prec < length && *str != '0')
        spe->prec = length;
    if ((spe->fzer == 1 && spe->fmin == 1 && spe->type == 3)
    || (spe->fzer == 1 && spe->type == 2))
        spe->fzer = 0;
    if ((spe->prec >= 0 || spe->fmin == 1) && spe->fzer == 1)
        spe->fzer = 0;
    if ((spe->type == 2 || spe->type == 3) && spe->width <= 1)
        spe->width = 0;
    if (spe->type == 1 && *str != '0' && spe->width == length)
        spe->width = 0;
    
}