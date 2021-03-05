#include "libftprintf.h"

/*
*
* va_start (nb, arg_ptr) nb prend le nombre de flags trouves dans s
*
*/


int ft_printf(const char *s, ...)
{    
    ft_specs *spe;
    va_list argptr;   
    int i;

    va_start(argptr, s);
    spe = (ft_specs *)ft_malloczero(sizeof(ft_specs));
    i = 0;
    if (!s)
        return (-1);
    while (s[i])
    {
        while (s[i] != '%' && s[i])
        {
            ft_putchar(s[i]);
            i++;
            spe->read++;
        }
        if (s[i] == '%')
            i += ft_load_spe(spe, s, i + 1, &argptr);
    }
    va_end(argptr);
    free(spe);
    return (spe->read);
}