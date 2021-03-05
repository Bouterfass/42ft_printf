#include "libftprintf.h"



int     ft_speclen(const char *s, int i)
{
    while (ft_is_valid_type(s[i]) == 0)
        i++;
    return (i);
}