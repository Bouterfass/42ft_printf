#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include "./libft/libft.h"
# include <stdarg.h>

typedef struct ft_specifications {
    char* flag;
    char* width;
    char* precision;
    char*  size;
    char*  type;
} ft_specs;

void        ft_putchar(char c);
void        ft_putstr(char *s);
void        ft_read_string(const char *s, va_list list);
int         ft_is_valid_type(char c);
ft_specs    ft_init_spec(void);
int         ft_printf(const char *s, ...);
int         count_format(const char *s);
int         *get_format_pos(const char *s);
char        *get_format(const char *s, int pos);
int         check_format(const char *s);

#endif