#include "libftprintf.h"

/*
*
* va_start (nb, arg_ptr) nb prend le nombre de flags trouves dans s
*
*/


int ft_printf(const char *s, ...)
{
    va_list arg_ptr;
    int args;
   // char *new_s;
    
    va_start(arg_ptr, s);
    args = 0;
    s = NULL;
    while (args < 3)
    {
        write(1, va_arg(arg_ptr, void*), 5);
        args++;
    }
    va_end(arg_ptr);
    return (0);
}