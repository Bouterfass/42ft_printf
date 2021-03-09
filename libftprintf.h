#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include "./libft/libft.h"
# include <stdarg.h>

# if __APPLE__
#  define IS_MACOS 1
# else
#  define IS_MACOS 0
# endif


typedef struct ft_specifications {
    int   fmin;
    int   fzer;
    int   min;
    int   width;
    int   prec;
    int   fillzero;
    int   type;
    int   printed;
    const char*   str;
    int hzer;
} ft_specs;

int         ft_putchar(char c);
void        ft_putstr(char *s);
int         ft_fill(char c, int n);
char        *ft_itox(unsigned int n, ft_specs *spe);
char	    *ft_utoa(unsigned int nbr);
int         ft_is_valid_type(char c);
void        ft_init_spec(ft_specs *spe);
int         ft_get_str(ft_specs *spe, const char *s,int i);
void        ft_get_flag(ft_specs *spe);
void        ft_get_width(ft_specs *spe, va_list *list);
void        ft_get_prec(ft_specs *spe, va_list *list);
void        ft_get_size(ft_specs *spe);
void        ft_get_type(ft_specs *spe, va_list *argptr);
void        ft_load_spe(ft_specs *spe, va_list *list);
void        set_spec(int length, char *str, ft_specs *spe);
void        print_width(ft_specs *spe, int length);
void        print_char(ft_specs *spe, va_list *argptr);
void        print_hex(ft_specs *spe, va_list *argptr);
void		print_ptr(ft_specs *spe, va_list *argptr);
void        print_string(ft_specs *spe, va_list *argptr);
void        print_unsigned(ft_specs *spe, va_list *argptr);
void        print_int(ft_specs *spe, va_list *argptr);
void		print_percent(ft_specs *spe);
void	    *ft_malloczero(size_t size);
void        print_minus(ft_specs *spe, char *str);
void	    print_not_minus(ft_specs *spe, char *str);
void	    print_precision(char *str, int prec, ft_specs *spe);
int         ft_printf(const char *s, ...);

#endif