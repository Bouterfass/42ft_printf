#include "libftprintf.h"


ft_specs ft_init_spec(void)
{
    ft_specs spe;

    spe.flag = 0;
    spe.width = 0;
    spe.precision = 0;
    spe.size = 0;
    spe.type = 0;

    return (spe);
}