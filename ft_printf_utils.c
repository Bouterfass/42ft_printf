#include "libftprintf.h"

int     count_format(const char *s)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (s[i])
    {
        if (s[i] == '%' && s[i + 1] != '%')
            count++;
        i++;
    }
    return (count);
}

int     *get_format_pos(const char *s)
{
    int nb_format;
    int *format_pos;
    int i;
    int j;

    nb_format = count_format(s);
    i = 0;
    j = 0;
    if (nb_format == 0)
        return (NULL);
    if (!(format_pos = (int *)malloc(sizeof(int) * nb_format)))
        return (NULL);
    while (s[i])
    {
        if (s[i] == '%' && s[i + 1] != '%')
        {
            format_pos[j] = i;
            j++;
        }
        i++;
    }
    return (format_pos); 
}

char    *get_format(const char *s, int pos)
{
    int start;
    int len;

    start = pos;
    len = 0;
    pos++;
    while (s[pos + len] != 'c' && s[pos + len] != 's' && s[pos + len] != 'p'
        && s[pos + len] != 'd' && s[pos + len] != 'i' && s[pos + len] != 'u'
        && s[pos + len] != 'x' && s[pos + len] != 'X')
        len++;
    return (ft_substr(s, start, len + 2));
}

int     is_type(char c)
{
    if (c == 'c' || c == 's' || c == 'p'
        || c == 'd' || c == 'i' || c == 'u'
        || c == 'x' || c == 'X')
        return (1);
    return (0);
}

int     check_format(const char *s)
{
    size_t i;

    i = 1;
    if (ft_strlen(s) == 2)
    {
        if (is_type(s[1]))
            return (1);
        else
            i++;
    }
    while (s[i] == ' ')
        i++;
    if (s[i] == '+' || s[i] == '-')
        i++;
    while (s[i] == '0')
        i++;
    if (s[i] == '*' && s[i + 1] == '.')
        i = i + 2;
    if (s[i] == '*' && i == (ft_strlen(s) - 1))
        return (1);
    while (s[i] >= '0' && s[i] <= '9')
            i++;
    if (i == (ft_strlen(s) - 1))
        return (1);  
    return (0);
}