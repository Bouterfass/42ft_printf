#include "libftprintf.h"



int main(int ac, char **av)
{
    (void)ac;
   (void)av;
   //ft_printf("salut", "abcde", 45, "salut");
   
    int *pos = get_format_pos(av[1]);
    printf("number of format: %d \n", count_format(av[1]));
    printf("position of each format :\n");
    for (int i = 0; i < count_format(av[1]); i++)
    {
        printf("%d\t", pos[i]); 
    }
    printf("\n");
    for (int i = 0; i < count_format(av[1]); i++)
    {
        printf(" %s\t", get_format(av[1], pos[i])); 
    }
       printf("\n");
    for (int i = 0; i < count_format(av[1]); i++)
    {
        printf(" %d\t", check_format(get_format(av[1], pos[i]))); 
    }
    return (0);
}