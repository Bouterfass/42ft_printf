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

int         ft_putchar(char c);
int         ft_putstr(char *s);
int         ft_read_spec(const char *s, int i, va_list *list);
char        *from_int_to_hex(int n);
int         ft_is_valid_type(char c);
ft_specs    ft_init_spec(void);
int         ft_printf(const char *s, ...);
int         count_format(const char *s);
int         *get_format_pos(const char *s);
char        *get_format(const char *s, int pos);
int         check_format(const char *s);

#endif