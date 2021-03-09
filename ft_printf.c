#include "libftprintf.h"


void	*ft_malloczero(size_t size)
{
	void	*dest;

	if ((dest = malloc(size)))
		ft_bzero(dest, size);
	return (dest);
} 

int ft_printf(const char *s, ...)
{    
    ft_specs    *spe;
    va_list     argptr;   
    int         printedchar;

    if (!s)
        return (-1);
    spe = (ft_specs *)ft_malloczero(sizeof(ft_specs));
    va_start(argptr, s);
    spe->str = s;
    while (*spe->str)
    {
        while (*spe->str != '%' && *spe->str)
        {
            ft_putchar(*spe->str);
            spe->str++;  
            spe->printed++;
        }
        if (*spe->str == '%')
            ft_load_spe(spe, &argptr);
    }
    printedchar = spe->printed;
    va_end(argptr);
    free(spe);
    return (printedchar);
}