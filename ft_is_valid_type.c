#include "libftprintf.h"

int ft_is_valid_type(char c)
{
    if ((c == 'd') || (c == 's') || c == 'c')
        return(1);
    return(0);    
}