#include "libftprintf.h"


void ft_init_spec(ft_specs *spe)
{
    
    spe->flag = 0;
    spe->width = 0;
    spe->prec = -1;
    spe->fillzero = 0;
    spe->min = 0;
    spe->type = -1;
    spe->read = 0;
    spe->str = 0;
}