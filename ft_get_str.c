#include "libftprintf.h"


int ft_get_str(ft_specs *spe, const char *s, int i)
{
    spe->str = (char *)malloc(sizeof(char) * (ft_speclen(s, i) - i));
    ft_memcpy(spe->str, ft_substr(s, i, ft_speclen(s, i) - (i - 1)), ft_speclen(s, i) - (i - 1));
    return (ft_speclen(s, i));
}