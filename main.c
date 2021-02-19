#include "libftprintf.h"

int main()
{
  //  int num = 26;
    char prenom[7] = "Youcef";
    char first_letter = 'Y';

    ft_printf("Salut %s, tu as %d ans, la premiere lettre de ton prenom est %c et ton age en hexa est %x!\n", prenom, 26, first_letter, 26);
    printf("%u\n", -294967296);
    return (0);
}