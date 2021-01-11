#include "libftprintf.h"

/*
*
* va_start (nb, arg_ptr) nb prend le nombre de flags trouves dans s
*
*/


int ft_printf(const char *s, ...)
{    
    int i;
    int res; 

    i = 0;
    res = 0;
    va_list argptr;   
    va_start(argptr, s);

    if (!s)
        return (-1);
    while (s[i])
    {
        if (s[i] == '%' && s[i])
        {
            res += ft_read_spec(s, i + 1, &argptr);
            i++;
        }
        else {
            res += ft_putchar(s[i]);
        }
        i++;
    }
    va_end(argptr);
    return (res);
}