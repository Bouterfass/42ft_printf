#include "libftprintf.h"


void ft_init_spec(ft_specs *spe)
{

    spe->width = 0;
    spe->prec = -1;
    spe->fillzero = 0;
    spe->min = 0;
    spe->type = -1;
    spe->fmin = 0;
    spe->fzer = 0;
    spe->hzer = 0;
}