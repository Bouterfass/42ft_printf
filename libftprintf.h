#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include "./libft/libft.h"
# include <stdarg.h>

typedef struct ft_specifications {
    int   flag;
    int   fmin;
    int   fzer;
    int   min;
    int   width;
    int   prec;
    int   fillzero;
    int   type;
    int   read;
    char*   str;
    int hex_null;
} ft_specs;

int         ft_putchar(char c);
int         ft_putstr(char *s);
int         ft_fill(char c, int n);
int         ft_read_spec(const char *s, int i, va_list *list);
char        *from_int_to_hex(int n);
char        *from_int_to_p(int n);
char	    *ft_utoa(unsigned int nbr);
char        *reverse_string(const char *s);
char        *from_int_to_bin(int n);
char        *from_int_to_lbin(int n);
char        *invert_bin(const char* s);
char        *inverted_plus_one(char *inverted);
char        *neg_hex(const char * s);
int         ft_is_valid_type(char c);
void        ft_init_spec(ft_specs *spe);
int         ft_get_str(ft_specs *spe, const char *s,int i);
void        ft_get_flag(ft_specs *spe);
void        ft_get_width(ft_specs *spe, va_list *list);
void        ft_get_prec(ft_specs *spe, va_list *list);
void        ft_get_size(ft_specs *spe);
void        ft_get_type(ft_specs *spe, va_list *argptr);
int         ft_load_spe(ft_specs *spe, const char *s, int i, va_list *list);
int         ft_speclen(const char *s, int i);
void        remap_flags(int length, char *str, ft_specs *spe);
void        print_width(ft_specs *spe, int length);
void        print_char(ft_specs *spe, va_list *argptr);
void        print_hex(ft_specs *spe, va_list *argptr);
void		print_ptr(ft_specs *spe, va_list *argptr);
void        print_string(ft_specs *spe, va_list *argptr);
void        print_unsigned(ft_specs *spe, va_list *argptr);
void        print_int(ft_specs *spe, va_list *argptr);
void	    *ft_malloczero(size_t size);
void        print_minus(ft_specs *spe, char *str);
void	    print_not_minus(ft_specs *spe, char *str);
void	    print_precision(char *str, int prec);
int         ft_printf(const char *s, ...);

#endif