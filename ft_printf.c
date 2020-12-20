#include "libftprintf.h"

/*
*
* va_start (nb, arg_ptr) nb prend le nombre de flags trouves dans s
*
*/


int ft_printf(const char *s, ...)
{
    int i;
    va_list argptr;
    
    i = 0;
    va_start(argptr, s);

    if (!s)
        return (-1);

    ft_read_string(s, argptr);

    va_end(argptr);
    return (0);
}