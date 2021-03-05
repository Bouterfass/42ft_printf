#include "libftprintf.h"


void ft_get_flag(ft_specs *spe)
{
    while (*spe->str == '-' || *spe->str == '0')
    {
        if (*spe->str == '0')
        {
            spe->str++;
            spe->fzer = 1;
        }
        if (*spe->str == '-')
        {
            spe->str++;
            spe->fmin = 1;
        }
    }
}