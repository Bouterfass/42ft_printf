#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include "./libft/libft.h"
# include <stdarg.h>

int     ft_printf(const char *s, ...);
int     count_format(const char *s);
int     *get_format_pos(const char *s);
char    *get_format(const char *s, int pos);
int     check_format(const char *s);

#endif