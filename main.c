#include "libftprintf.h"

int main()
{
  //  int num = 26;
    char prenom[7] = "Youcef";
    char first_letter = 'Y';

    ft_printf("Salut %s, tu as %d ans, et la premiere lettre de ton prenom est %c!\n", prenom, 26, first_letter);
    return (0);
}